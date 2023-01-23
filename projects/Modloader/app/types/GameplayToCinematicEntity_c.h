#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/GameplayToCinematicEntity_c__Class.h>
#include <Modloader/app/structs/GameplayToCinematicEntity_c.h>

namespace app::classes::types {
    namespace GameplayToCinematicEntity_c {
        inline app::GameplayToCinematicEntity_c__Class** type_info = (app::GameplayToCinematicEntity_c__Class**)(modloader::win::memory::resolve_rva(0x04754FB8));
        inline app::GameplayToCinematicEntity_c__Class* get_class() {
            return il2cpp::get_nested_class<app::GameplayToCinematicEntity_c__Class>(type_info, "Moon.Timeline", "GameplayToCinematicEntity", "<>c");
        }
        inline app::GameplayToCinematicEntity_c* create() {
            return il2cpp::create_object<app::GameplayToCinematicEntity_c>(get_class());
        }
    } // namespace GameplayToCinematicEntity_c
} // namespace app::classes::types
