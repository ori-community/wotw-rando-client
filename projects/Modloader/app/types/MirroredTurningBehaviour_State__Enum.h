#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/MirroredTurningBehaviour_State__Enum__Class.h>
#include <Modloader/app/structs/MirroredTurningBehaviour_State__Enum.h>

namespace app::classes::types {
    namespace MirroredTurningBehaviour_State__Enum {
        inline app::MirroredTurningBehaviour_State__Enum__Class** type_info = (app::MirroredTurningBehaviour_State__Enum__Class**)(modloader::win::memory::resolve_rva(0x0474E1A8));
        inline app::MirroredTurningBehaviour_State__Enum__Class* get_class() {
            return il2cpp::get_nested_class<app::MirroredTurningBehaviour_State__Enum__Class>(type_info, "Moon", "MirroredTurningBehaviour", "State");
        }
        inline app::MirroredTurningBehaviour_State__Enum* create() {
            return il2cpp::create_object<app::MirroredTurningBehaviour_State__Enum>(get_class());
        }
    } // namespace MirroredTurningBehaviour_State__Enum
} // namespace app::classes::types
