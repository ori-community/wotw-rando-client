#pragma once
#include <Modloader/app/structs/FishState.h>
#include <Modloader/app/structs/FishState__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace FishState {
        inline app::FishState__Class** type_info() {
            static app::FishState__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::FishState__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::FishState__Class* get_class() {
            return il2cpp::get_class<app::FishState__Class>(type_info(), "", "FishState");
        }
        inline app::FishState* create() {
            return il2cpp::create_object<app::FishState>(get_class());
        }
    } // namespace FishState
} // namespace app::classes::types
