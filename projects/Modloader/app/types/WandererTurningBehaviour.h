#pragma once
#include <Modloader/app/structs/WandererTurningBehaviour.h>
#include <Modloader/app/structs/WandererTurningBehaviour__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace WandererTurningBehaviour {
        inline app::WandererTurningBehaviour__Class** type_info() {
            static app::WandererTurningBehaviour__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::WandererTurningBehaviour__Class**)(modloader::win::memory::resolve_rva(0x0472DF20));
            }
            return cache;
        }
        inline app::WandererTurningBehaviour__Class* get_class() {
            return il2cpp::get_class<app::WandererTurningBehaviour__Class>(type_info(), "", "WandererTurningBehaviour");
        }
        inline app::WandererTurningBehaviour* create() {
            return il2cpp::create_object<app::WandererTurningBehaviour>(get_class());
        }
    } // namespace WandererTurningBehaviour
} // namespace app::classes::types
