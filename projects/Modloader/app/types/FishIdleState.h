#pragma once
#include <Modloader/app/structs/FishIdleState.h>
#include <Modloader/app/structs/FishIdleState__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace FishIdleState {
        inline app::FishIdleState__Class** type_info() {
            static app::FishIdleState__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::FishIdleState__Class**)(modloader::win::memory::resolve_rva(0x04736348));
            }
            return cache;
        }
        inline app::FishIdleState__Class* get_class() {
            return il2cpp::get_class<app::FishIdleState__Class>(type_info(), "", "FishIdleState");
        }
        inline app::FishIdleState* create() {
            return il2cpp::create_object<app::FishIdleState>(get_class());
        }
    } // namespace FishIdleState
} // namespace app::classes::types
