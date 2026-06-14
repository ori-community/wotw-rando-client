#pragma once
#include <Modloader/app/structs/SliderState.h>
#include <Modloader/app/structs/SliderState__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace SliderState {
        inline app::SliderState__Class** type_info() {
            static app::SliderState__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::SliderState__Class**)(modloader::win::memory::resolve_rva(0x047694D0));
            }
            return cache;
        }
        inline app::SliderState__Class* get_class() {
            return il2cpp::get_class<app::SliderState__Class>(type_info(), "UnityEngine", "SliderState");
        }
        inline app::SliderState* create() {
            return il2cpp::create_object<app::SliderState>(get_class());
        }
    } // namespace SliderState
} // namespace app::classes::types
