#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/CharConverter.h>
#include <Modloader/app/structs/ITypeDescriptorContext.h>
#include <Modloader/app/structs/Type.h>
#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/CultureInfo.h>

namespace app::classes::System::ComponentModel::CharConverter {
    IL2CPP_REGISTER_METHOD(0x024A8010, bool, CanConvertFrom, (app::CharConverter * this_ptr, app::ITypeDescriptorContext* context, app::Type* source_type))
    IL2CPP_REGISTER_METHOD(0x024A80F0, app::Object*, ConvertTo, (app::CharConverter * this_ptr, app::ITypeDescriptorContext* context, app::CultureInfo* culture, app::Object* value, app::Type* destination_type))
    IL2CPP_REGISTER_METHOD(0x024A8230, app::Object*, ConvertFrom, (app::CharConverter * this_ptr, app::ITypeDescriptorContext* context, app::CultureInfo* culture, app::Object* value))
    IL2CPP_REGISTER_METHODINFO(0x04715FA0, CharConverter_ConvertFrom__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x024A8420, void, ctor, (app::CharConverter * this_ptr))
} // namespace app::classes::System::ComponentModel::CharConverter
