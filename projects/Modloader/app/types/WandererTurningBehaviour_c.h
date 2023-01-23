#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/WandererTurningBehaviour_c__Class.h>
#include <Modloader/app/structs/WandererTurningBehaviour_c.h>

namespace app::classes::types {
    namespace WandererTurningBehaviour_c {
        inline app::WandererTurningBehaviour_c__Class** type_info = (app::WandererTurningBehaviour_c__Class**)(modloader::win::memory::resolve_rva(0x04788320));
        inline app::WandererTurningBehaviour_c__Class* get_class() {
            return il2cpp::get_nested_class<app::WandererTurningBehaviour_c__Class>(type_info, "", "WandererTurningBehaviour", "<>c");
        }
        inline app::WandererTurningBehaviour_c* create() {
            return il2cpp::create_object<app::WandererTurningBehaviour_c>(get_class());
        }
    } // namespace WandererTurningBehaviour_c
} // namespace app::classes::types
