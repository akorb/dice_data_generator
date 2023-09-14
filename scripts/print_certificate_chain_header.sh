if [ "$#" -ne 1 ]; then
    echo 'Missing argument.'
    echo 'Give (only) the directory path to the certificates.'
    exit 1
fi

source scripts/common.sh

CERTS_FOLDER=$1

CONTENT=\
"$(print_ascii_file_as_c_array ${CERTS_FOLDER} bl1 crt crt_)

$(print_ascii_file_as_c_array ${CERTS_FOLDER} bl2 crt crt_)

$(print_ascii_file_as_c_array ${CERTS_FOLDER} bl32 crt crt_)

$(print_ascii_file_as_c_array ${CERTS_FOLDER} bl31 crt crt_)"

sh scripts/print_header.sh "CERT_CHAIN_H" "${CONTENT}"
