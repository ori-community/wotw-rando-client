#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace SliderState {
        inline app::SliderState__Class** type_info = (app::SliderState__Class**)(modloader::win::memory::resolve_rva(0x047694D0));
        inline app::SliderState__Class* get_class() {
            return il2cpp::get_class<app::SliderState__Class>(type_info, "UnityEngine", "SliderState");
        }
        inline app::SliderState* create() {
            return il2cpp::create_object<app::SliderState>(get_class());
        }
    } // namespace SliderState
} // namespace app::classes::types
