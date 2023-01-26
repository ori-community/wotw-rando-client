#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/TypeDescriptor_AttributeProvider.h>
#include <Modloader/app/structs/Attribute__Array.h>
#include <Modloader/app/structs/ICustomTypeDescriptor.h>
#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/Type.h>
#include <Modloader/app/structs/TypeDescriptionProvider.h>

namespace app::classes::System::ComponentModel::TypeDescriptor_AttributeProvider {
    IL2CPP_REGISTER_METHOD(0x0239A1A0, void, ctor, (app::TypeDescriptor_AttributeProvider * this_ptr, app::TypeDescriptionProvider* existing_provider, app::Attribute__Array* attrs))
    IL2CPP_REGISTER_METHOD(0x02956040, app::ICustomTypeDescriptor*, GetTypeDescriptor, (app::TypeDescriptor_AttributeProvider * this_ptr, app::Type* object_type, app::Object* instance))
} // namespace app::classes::System::ComponentModel::TypeDescriptor_AttributeProvider
