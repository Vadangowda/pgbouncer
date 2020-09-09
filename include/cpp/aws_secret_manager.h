/*
* Copyright © 2019  Splunk Inc.
* SPLUNK CONFIDENTIAL – Use or disclosure of this material in whole or in part
* without a valid written license from Splunk Inc. is PROHIBITED.
*/

#pragma once

#include <aws/core/Aws.h>

#include <aws/core/client/ClientConfiguration.h>

#define AWS_SECRET_REGION "us-west-2"

class AWSSecretManager {
  public:
    AWSSecretManager();

    virtual ~AWSSecretManager();

    // implement the interface
    virtual bool Initialize( const std::string&, const std::string& region);

    virtual bool CreateSecret( const std::string&, const std::string&);

    virtual bool UpdateSecret( const std::string&, const std::string&);

    virtual bool GetSecret( const std::string&, std::string& );

    virtual bool DeleteSecret( const std::string& );

  protected:
    std::string tenant_;

    std::string region_;

    std::string path_;

    Aws::Client::ClientConfiguration client_config_;
};
