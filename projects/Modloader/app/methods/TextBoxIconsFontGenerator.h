#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/TextBoxIconsFontGenerator.h>
#include <Modloader/app/structs/TextBoxIconsFontGenerator_IconData.h>

namespace app::classes::TextBoxIconsFontGenerator {
    IL2CPP_REGISTER_METHOD(0x010E43C0, app::TextBoxIconsFontGenerator_IconData*, FindIcon, app::TextBoxIconsFontGenerator* this_ptr, int32_t id)
    IL2CPP_REGISTER_METHOD(0x010E4580, void, ctor, app::TextBoxIconsFontGenerator* this_ptr)
} // namespace app::classes::TextBoxIconsFontGenerator
