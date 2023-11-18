#pragma once
#include <Modloader/app/structs/FishSwimState.h>
#include <Modloader/app/structs/FishSwimState__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace FishSwimState {
        inline app::FishSwimState__Class** type_info() {
            static app::FishSwimState__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::FishSwimState__Class**)(modloader::win::memory::resolve_rva(0x04756D38));
            }
            return cache;
        }
        inline app::FishSwimState__Class* get_class() {
            return il2cpp::get_class<app::FishSwimState__Class>(type_info(), "", "FishSwimState");
        }
        inline app::FishSwimState* create() {
            return il2cpp::create_object<app::FishSwimState>(get_class());
        }
    } // namespace FishSwimState
} // namespace app::classes::types
