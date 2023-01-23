#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/DataTableTypeConverter.h>
#include <Modloader/app/structs/ITypeDescriptorContext.h>

namespace app::classes::System::Data::DataTableTypeConverter {
    IL2CPP_REGISTER_METHOD(0x00417870, bool, GetPropertiesSupported, (app::DataTableTypeConverter * this_ptr, app::ITypeDescriptorContext* context))
}
