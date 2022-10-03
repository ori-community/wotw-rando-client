#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::classes::System::Net::Configuration::DefaultProxySectionInternal {
    IL2CPP_REGISTER_METHOD(0x02018EF0, app::IWebProxy*, GetDefaultProxy_UsingOldMonoCode, ())
    IL2CPP_REGISTER_METHOD(0x02018EF0, app::IWebProxy*, GetSystemWebProxy, ())
    IL2CPP_REGISTER_METHOD(0x02018F00, app::Object*, get_ClassSyncObject, ())
    IL2CPP_REGISTER_METHOD(0x02019070, app::DefaultProxySectionInternal*, GetSection, ())
    IL2CPP_REGISTER_METHOD(0x002FA280, app::IWebProxy*, get_WebProxy, (app::DefaultProxySectionInternal * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, (app::DefaultProxySectionInternal * this_ptr))
} // namespace app::classes::System::Net::Configuration::DefaultProxySectionInternal
