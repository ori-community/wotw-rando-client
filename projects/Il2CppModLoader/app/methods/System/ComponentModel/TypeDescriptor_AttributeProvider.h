#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::classes::System::ComponentModel::TypeDescriptor_AttributeProvider {
    IL2CPP_REGISTER_METHOD(0x0239A1A0, void, ctor, (app::TypeDescriptor_AttributeProvider * this_ptr, app::TypeDescriptionProvider* existing_provider, app::Attribute__Array* attrs))
    IL2CPP_REGISTER_METHOD(0x02956040, app::ICustomTypeDescriptor*, GetTypeDescriptor, (app::TypeDescriptor_AttributeProvider * this_ptr, app::Type* object_type, app::Object* instance))
} // namespace app::classes::System::ComponentModel::TypeDescriptor_AttributeProvider
