#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/AppDomainSetup.h>
#include <Modloader/app/structs/String.h>

namespace app::classes::System::AppDomainSetup {
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor_1, app::AppDomainSetup* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0228F7F0, void, ctor_2, app::AppDomainSetup* this_ptr, app::AppDomainSetup* setup)
    IL2CPP_REGISTER_METHOD(0x0228F8D0, app::String*, GetAppBase, app::String* app_base)
    IL2CPP_REGISTER_METHOD(0x0228FDD0, app::String*, get_ApplicationBase, app::AppDomainSetup* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FB9B0, app::String*, get_LicenseFile, app::AppDomainSetup* this_ptr)
} // namespace app::classes::System::AppDomainSetup
