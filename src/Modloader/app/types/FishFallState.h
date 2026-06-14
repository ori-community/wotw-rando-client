#pragma once
#include <Modloader/app/structs/FishFallState.h>
#include <Modloader/app/structs/FishFallState__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace FishFallState {
        inline app::FishFallState__Class** type_info() {
            static app::FishFallState__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::FishFallState__Class**)(modloader::win::memory::resolve_rva(0x0476AFC0));
            }
            return cache;
        }
        inline app::FishFallState__Class* get_class() {
            return il2cpp::get_class<app::FishFallState__Class>(type_info(), "", "FishFallState");
        }
        inline app::FishFallState* create() {
            return il2cpp::create_object<app::FishFallState>(get_class());
        }
    } // namespace FishFallState
} // namespace app::classes::types
