#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/MultilineStringConverter.h>
#include <Modloader/app/structs/ITypeDescriptorContext.h>
#include <Modloader/app/structs/CultureInfo.h>
#include <Modloader/app/structs/Type.h>
#include <Modloader/app/structs/PropertyDescriptorCollection.h>
#include <Modloader/app/structs/Attribute__Array.h>

namespace app::classes::System::ComponentModel::MultilineStringConverter {
    IL2CPP_REGISTER_METHOD(0x0298FED0, app::Object*, ConvertTo, (app::MultilineStringConverter * this_ptr, app::ITypeDescriptorContext* context, app::CultureInfo* culture, app::Object* value, app::Type* destination_type))
    IL2CPP_REGISTER_METHODINFO(0x04754898, MultilineStringConverter_ConvertTo__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x00420EE0, app::PropertyDescriptorCollection*, GetProperties, (app::MultilineStringConverter * this_ptr, app::ITypeDescriptorContext* context, app::Object* value, app::Attribute__Array* attributes))
    IL2CPP_REGISTER_METHOD(0x00417870, bool, GetPropertiesSupported, (app::MultilineStringConverter * this_ptr, app::ITypeDescriptorContext* context))
    IL2CPP_REGISTER_METHOD(0x02990050, void, ctor, (app::MultilineStringConverter * this_ptr))
} // namespace app::classes::System::ComponentModel::MultilineStringConverter
