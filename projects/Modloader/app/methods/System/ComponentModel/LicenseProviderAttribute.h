#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/LicenseProviderAttribute.h>
#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/String.h>
#include <Modloader/app/structs/Type.h>

namespace app::classes::System::ComponentModel::LicenseProviderAttribute {
    IL2CPP_REGISTER_METHOD(0x002FBAF0, void, ctor_1, (app::LicenseProviderAttribute * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FB940, void, ctor_2, (app::LicenseProviderAttribute * this_ptr, app::String* type_name))
    IL2CPP_REGISTER_METHOD(0x002FA490, void, ctor_3, (app::LicenseProviderAttribute * this_ptr, app::Type* type))
    IL2CPP_REGISTER_METHOD(0x01FF4130, app::Type*, get_LicenseProvider, (app::LicenseProviderAttribute * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01FF4230, app::Object*, get_TypeId, (app::LicenseProviderAttribute * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01FF4340, bool, Equals, (app::LicenseProviderAttribute * this_ptr, app::Object* value))
    IL2CPP_REGISTER_METHOD(0x01FDE840, int32_t, GetHashCode, (app::LicenseProviderAttribute * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01FF44A0, void, cctor, ())
} // namespace app::classes::System::ComponentModel::LicenseProviderAttribute
