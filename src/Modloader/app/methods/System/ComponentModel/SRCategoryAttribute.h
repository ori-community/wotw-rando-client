#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/SRCategoryAttribute.h>
#include <Modloader/app/structs/String.h>

namespace app::classes::System::ComponentModel::SRCategoryAttribute {
    IL2CPP_REGISTER_METHOD(0x024A76E0, void, ctor, app::SRCategoryAttribute* this_ptr, app::String* category)
}
