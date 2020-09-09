#ifndef AWS_SECRET_MANAGER_C_CONNECTOR_H
#define AWS_SECRET_MANAGER_C_CONNECTOR_H

#ifdef __cplusplus
extern "C" {
#endif

char* aws_secret_manager_get_secret(const char *name);

#ifdef __cplusplus
}
#endif


#endif