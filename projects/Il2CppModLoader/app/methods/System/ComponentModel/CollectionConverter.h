#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::classes::System::ComponentModel::CollectionConverter {
    IL2CPP_REGISTER_METHOD(0x024A8560, app::Object*, ConvertTo, (app::CollectionConverter * this_ptr, app::ITypeDescriptorContext* context, app::CultureInfo* culture, app::Object* value, app::Type* destination_type))
    IL2CPP_REGISTER_METHODINFO(0x0472DFC0, CollectionConverter_ConvertTo__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x00420EE0, app::PropertyDescriptorCollection*, GetProperties, (app::CollectionConverter * this_ptr, app::ITypeDescriptorContext* context, app::Object* value, app::Attribute__Array* attributes))
    IL2CPP_REGISTER_METHOD(0x00417870, bool, GetPropertiesSupported, (app::CollectionConverter * this_ptr, app::ITypeDescriptorContext* context))
    IL2CPP_REGISTER_METHOD(0x0249FD10, void, ctor, (app::CollectionConverter * this_ptr))
} // namespace app::classes::System::ComponentModel::CollectionConverter
