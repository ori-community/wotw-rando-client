#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/IdRefNode.h>
#include <Modloader/app/structs/String.h>

namespace app::classes::System::Xml::Schema::IdRefNode {
    IL2CPP_REGISTER_METHOD(0x016CC210, void, ctor, (app::IdRefNode * this_ptr, app::IdRefNode* next, app::String* id, int32_t line_no, int32_t line_pos))
}
