#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/AuthenticationManager.h>
#include <Modloader/app/structs/Authorization.h>
#include <Modloader/app/structs/Exception.h>
#include <Modloader/app/structs/IAuthenticationModule.h>
#include <Modloader/app/structs/ICredentialPolicy.h>
#include <Modloader/app/structs/ICredentials.h>
#include <Modloader/app/structs/IEnumerator.h>
#include <Modloader/app/structs/String.h>
#include <Modloader/app/structs/StringDictionary.h>
#include <Modloader/app/structs/WebRequest.h>

namespace app::classes::System::Net::AuthenticationManager {
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, (app::AuthenticationManager * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0200E810, void, EnsureModules, ())
    IL2CPP_REGISTER_METHOD(0x0200EEC0, app::ICredentialPolicy*, get_CredentialPolicy, ())
    IL2CPP_REGISTER_METHOD(0x0200EF60, void, set_CredentialPolicy, (app::ICredentialPolicy * value))
    IL2CPP_REGISTER_METHOD(0x0200F010, app::Exception*, GetMustImplement, ())
    IL2CPP_REGISTER_METHOD(0x0200F150, app::StringDictionary*, get_CustomTargetNameDictionary, ())
    IL2CPP_REGISTER_METHOD(0x0200F1F0, app::IEnumerator*, get_RegisteredModules, ())
    IL2CPP_REGISTER_METHOD(0x00417870, bool, get_OSSupportsExtendedProtection, ())
    IL2CPP_REGISTER_METHOD(0x0200F2B0, void, Clear, ())
    IL2CPP_REGISTER_METHOD(0x0200F460, app::Authorization*, Authenticate, (app::String * challenge, app::WebRequest* request, app::ICredentials* credentials))
    IL2CPP_REGISTER_METHOD(0x0200F5C0, app::Authorization*, DoAuthenticate, (app::String * challenge, app::WebRequest* request, app::ICredentials* credentials))
    IL2CPP_REGISTER_METHOD(0x0200F8E0, app::Authorization*, PreAuthenticate, (app::WebRequest * request, app::ICredentials* credentials))
    IL2CPP_REGISTER_METHOD(0x0200FCD0, void, Register, (app::IAuthenticationModule * authentication_module))
    IL2CPP_REGISTER_METHOD(0x0200FED0, void, Unregister_1, (app::IAuthenticationModule * authentication_module))
    IL2CPP_REGISTER_METHOD(0x0200FFC0, void, Unregister_2, (app::String * authentication_scheme))
    IL2CPP_REGISTER_METHOD(0x020100A0, void, DoUnregister, (app::String * authentication_scheme, bool throw_ex))
    IL2CPP_REGISTER_METHOD(0x02010450, void, cctor, ())
} // namespace app::classes::System::Net::AuthenticationManager
