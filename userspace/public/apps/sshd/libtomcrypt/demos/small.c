// small demo app that just includes a cipher/hash/prng
#include <tomcrypt.h>

int main(void)
{
   register_cipher(&rijndael_enc_desc);
   register_prng(&yarrow_desc);
   register_hash(&sha256_desc);
   return 0;
}

/* $Source: /cvs/cable/Lion/userspace/public/apps/sshd/libtomcrypt/demos/small.c,v $ */
/* $Revision: 1.2 $ */
/* $Date: 2014/11/19 09:14:00 $ */
