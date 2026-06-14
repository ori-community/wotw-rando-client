#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/LicenseManager_LicenseInteropHelper.h>
#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/RuntimeTypeHandle.h>
#include <Modloader/app/structs/void.h>

namespace app::classes::System::ComponentModel::LicenseManager_LicenseInteropHelper {
    IL2CPP_REGISTER_METHOD(0x01FF34B0, app::Object*, AllocateAndValidateLicense, app::RuntimeTypeHandle rth, void* bstr_key, int32_t f_design_time)
    IL2CPP_REGISTER_METHOD(0x01FF37A0, int32_t, RequestLicKey, app::RuntimeTypeHandle rth, void** pbstr_key)
    IL2CPP_REGISTER_METHOD(
        0x01FF3940,
        void,
        GetLicInfo,
        app::LicenseManager_LicenseInteropHelper* this_ptr,
        app::RuntimeTypeHandle rth,
        int32_t* p_runtime_key_avail,
        int32_t* p_lic_verified
    )
    IL2CPP_REGISTER_METHOD(
        0x01FF3D10,
        void,
        GetCurrentContextInfo,
        app::LicenseManager_LicenseInteropHelper* this_ptr,
        int32_t* f_design_time,
        void** bstr_key,
        app::RuntimeTypeHandle rth
    )
    IL2CPP_REGISTER_METHOD(0x01FF3EC0, void, SaveKeyInCurrentContext, app::LicenseManager_LicenseInteropHelper* this_ptr, void* bstr_key)
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, app::LicenseManager_LicenseInteropHelper* this_ptr)
} // namespace app::classes::System::ComponentModel::LicenseManager_LicenseInteropHelper
