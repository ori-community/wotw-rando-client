#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/MoonAnimator_c_DisplayClass54_0__Class.h>
#include <Modloader/app/structs/MoonAnimator_c_DisplayClass54_0.h>

namespace app::classes::types {
    namespace MoonAnimator_c_DisplayClass54_0 {
        inline app::MoonAnimator_c_DisplayClass54_0__Class** type_info = (app::MoonAnimator_c_DisplayClass54_0__Class**)(modloader::win::memory::resolve_rva(0x04728F60));
        inline app::MoonAnimator_c_DisplayClass54_0__Class* get_class() {
            return il2cpp::get_nested_class<app::MoonAnimator_c_DisplayClass54_0__Class>(type_info, "Moon", "MoonAnimator", "<>c__DisplayClass54_0");
        }
        inline app::MoonAnimator_c_DisplayClass54_0* create() {
            return il2cpp::create_object<app::MoonAnimator_c_DisplayClass54_0>(get_class());
        }
    } // namespace MoonAnimator_c_DisplayClass54_0
} // namespace app::classes::types
