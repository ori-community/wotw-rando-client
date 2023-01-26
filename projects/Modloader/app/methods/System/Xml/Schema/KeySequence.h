#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/KeySequence.h>
#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/String.h>

namespace app::classes::System::Xml::Schema::KeySequence {
    IL2CPP_REGISTER_METHOD(0x016CC620, void, ctor, (app::KeySequence * this_ptr, int32_t dim, int32_t line, int32_t col))
    IL2CPP_REGISTER_METHOD(0x002FD1D0, int32_t, get_PosLine, (app::KeySequence * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00529E80, int32_t, get_PosCol, (app::KeySequence * this_ptr))
    IL2CPP_REGISTER_METHOD(0x016CC6E0, app::Object*, get_Item, (app::KeySequence * this_ptr, int32_t index))
    IL2CPP_REGISTER_METHOD(0x016CC720, void, set_Item, (app::KeySequence * this_ptr, int32_t index, app::Object* value))
    IL2CPP_REGISTER_METHOD(0x016CC8A0, bool, IsQualified, (app::KeySequence * this_ptr))
    IL2CPP_REGISTER_METHOD(0x016CC900, int32_t, GetHashCode, (app::KeySequence * this_ptr))
    IL2CPP_REGISTER_METHOD(0x016CCE00, bool, Equals, (app::KeySequence * this_ptr, app::Object* other))
    IL2CPP_REGISTER_METHOD(0x016CCF90, app::String*, ToString, (app::KeySequence * this_ptr))
} // namespace app::classes::System::Xml::Schema::KeySequence
