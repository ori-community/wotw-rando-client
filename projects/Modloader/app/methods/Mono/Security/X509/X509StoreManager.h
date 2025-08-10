#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/ArrayList.h>
#include <Modloader/app/structs/String.h>
#include <Modloader/app/structs/X509CertificateCollection_2.h>
#include <Modloader/app/structs/X509StoreManager.h>
#include <Modloader/app/structs/X509Stores.h>

namespace app::classes::Mono::Security::X509::X509StoreManager {
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, app::X509StoreManager* this_ptr)
    IL2CPP_REGISTER_METHOD(0x03169820, app::String*, get_CurrentUserPath, )
    IL2CPP_REGISTER_METHOD(0x03169940, app::String*, get_LocalMachinePath, )
    IL2CPP_REGISTER_METHOD(0x03169A60, app::String*, get_NewCurrentUserPath, )
    IL2CPP_REGISTER_METHOD(0x03169B80, app::String*, get_NewLocalMachinePath, )
    IL2CPP_REGISTER_METHOD(0x03169CA0, app::X509Stores*, get_CurrentUser, )
    IL2CPP_REGISTER_METHOD(0x03169F20, app::X509Stores*, get_LocalMachine, )
    IL2CPP_REGISTER_METHOD(0x0316A1A0, app::X509Stores*, get_NewCurrentUser, )
    IL2CPP_REGISTER_METHOD(0x0316A420, app::X509Stores*, get_NewLocalMachine, )
    IL2CPP_REGISTER_METHOD(0x0316A6A0, app::X509CertificateCollection_2*, get_IntermediateCACertificates, )
    IL2CPP_REGISTER_METHOD(0x0316A8A0, app::ArrayList*, get_IntermediateCACrls, )
    IL2CPP_REGISTER_METHOD(0x0316AA80, app::X509CertificateCollection_2*, get_TrustedRootCertificates, )
    IL2CPP_REGISTER_METHOD(0x0316AC80, app::ArrayList*, get_TrustedRootCACrls, )
    IL2CPP_REGISTER_METHOD(0x0316AE60, app::X509CertificateCollection_2*, get_UntrustedCertificates, )
} // namespace app::classes::Mono::Security::X509::X509StoreManager
