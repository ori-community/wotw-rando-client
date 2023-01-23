#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/WandererTurningBehaviour__Class.h>
#include <Modloader/app/structs/WandererTurningBehaviour.h>

namespace app::classes::types {
    namespace WandererTurningBehaviour {
        inline app::WandererTurningBehaviour__Class** type_info = (app::WandererTurningBehaviour__Class**)(modloader::win::memory::resolve_rva(0x0472DF20));
        inline app::WandererTurningBehaviour__Class* get_class() {
            return il2cpp::get_class<app::WandererTurningBehaviour__Class>(type_info, "", "WandererTurningBehaviour");
        }
        inline app::WandererTurningBehaviour* create() {
            return il2cpp::create_object<app::WandererTurningBehaviour>(get_class());
        }
    } // namespace WandererTurningBehaviour
} // namespace app::classes::types
