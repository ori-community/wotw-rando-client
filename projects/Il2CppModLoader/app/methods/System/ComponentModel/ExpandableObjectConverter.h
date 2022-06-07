#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::System::ComponentModel::ExpandableObjectConverter {
    IL2CPP_REGISTER_METHOD(0x01FECA60, void, ctor, (app::ExpandableObjectConverter * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01FECAF0, app::PropertyDescriptorCollection *, GetProperties, (app::ExpandableObjectConverter * this_ptr, app::ITypeDescriptorContext * context, app::Object * value, app::Attribute__Array * attributes))
    IL2CPP_REGISTER_METHOD(0x003FFDF0, bool, GetPropertiesSupported, (app::ExpandableObjectConverter * this_ptr, app::ITypeDescriptorContext * context))
}
