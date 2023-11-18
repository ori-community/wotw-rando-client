#pragma once
#include <Modloader/app/structs/MoonAnimator_c_DisplayClass54_0.h>
#include <Modloader/app/structs/MoonAnimator_c_DisplayClass54_0__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace MoonAnimator_c_DisplayClass54_0 {
        inline app::MoonAnimator_c_DisplayClass54_0__Class** type_info() {
            static app::MoonAnimator_c_DisplayClass54_0__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::MoonAnimator_c_DisplayClass54_0__Class**)(modloader::win::memory::resolve_rva(0x04728F60));
            }
            return cache;
        }
        inline app::MoonAnimator_c_DisplayClass54_0__Class* get_class() {
            return il2cpp::get_nested_class<app::MoonAnimator_c_DisplayClass54_0__Class>(type_info(), "Moon", "MoonAnimator", "<>c__DisplayClass54_0");
        }
        inline app::MoonAnimator_c_DisplayClass54_0* create() {
            return il2cpp::create_object<app::MoonAnimator_c_DisplayClass54_0>(get_class());
        }
    } // namespace MoonAnimator_c_DisplayClass54_0
} // namespace app::classes::types
