#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/ExpandableObjectConverter.h>
#include <Modloader/app/structs/PropertyDescriptorCollection.h>
#include <Modloader/app/structs/ITypeDescriptorContext.h>
#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/Attribute__Array.h>

namespace app::classes::System::ComponentModel::ExpandableObjectConverter {
    IL2CPP_REGISTER_METHOD(0x01FECA60, void, ctor, (app::ExpandableObjectConverter * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01FECAF0, app::PropertyDescriptorCollection*, GetProperties, (app::ExpandableObjectConverter * this_ptr, app::ITypeDescriptorContext* context, app::Object* value, app::Attribute__Array* attributes))
    IL2CPP_REGISTER_METHOD(0x003FFDF0, bool, GetPropertiesSupported, (app::ExpandableObjectConverter * this_ptr, app::ITypeDescriptorContext* context))
} // namespace app::classes::System::ComponentModel::ExpandableObjectConverter
