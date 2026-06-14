#pragma once
#include <Modloader/app/structs/WormEmergingState.h>
#include <Modloader/app/structs/WormEmergingState__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace WormEmergingState {
        inline app::WormEmergingState__Class** type_info() {
            static app::WormEmergingState__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::WormEmergingState__Class**)(modloader::win::memory::resolve_rva(0x0470CCF0));
            }
            return cache;
        }
        inline app::WormEmergingState__Class* get_class() {
            return il2cpp::get_class<app::WormEmergingState__Class>(type_info(), "", "WormEmergingState");
        }
        inline app::WormEmergingState* create() {
            return il2cpp::create_object<app::WormEmergingState>(get_class());
        }
    } // namespace WormEmergingState
} // namespace app::classes::types
