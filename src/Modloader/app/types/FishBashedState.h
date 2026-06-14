#pragma once
#include <Modloader/app/structs/FishBashedState.h>
#include <Modloader/app/structs/FishBashedState__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace FishBashedState {
        inline app::FishBashedState__Class** type_info() {
            static app::FishBashedState__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::FishBashedState__Class**)(modloader::win::memory::resolve_rva(0x04778798));
            }
            return cache;
        }
        inline app::FishBashedState__Class* get_class() {
            return il2cpp::get_class<app::FishBashedState__Class>(type_info(), "", "FishBashedState");
        }
        inline app::FishBashedState* create() {
            return il2cpp::create_object<app::FishBashedState>(get_class());
        }
    } // namespace FishBashedState
} // namespace app::classes::types
