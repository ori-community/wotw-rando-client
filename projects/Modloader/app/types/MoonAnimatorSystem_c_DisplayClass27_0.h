#pragma once
#include <Modloader/app/structs/MoonAnimatorSystem_c_DisplayClass27_0.h>
#include <Modloader/app/structs/MoonAnimatorSystem_c_DisplayClass27_0__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace MoonAnimatorSystem_c_DisplayClass27_0 {
        inline app::MoonAnimatorSystem_c_DisplayClass27_0__Class** type_info() {
            static app::MoonAnimatorSystem_c_DisplayClass27_0__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::MoonAnimatorSystem_c_DisplayClass27_0__Class**)(modloader::win::memory::resolve_rva(0x04703A08));
            }
            return cache;
        }
        inline app::MoonAnimatorSystem_c_DisplayClass27_0__Class* get_class() {
            return il2cpp::get_nested_class<app::MoonAnimatorSystem_c_DisplayClass27_0__Class>(type_info(), "Moon", "MoonAnimatorSystem", "<>c__DisplayClass27_0");
        }
        inline app::MoonAnimatorSystem_c_DisplayClass27_0* create() {
            return il2cpp::create_object<app::MoonAnimatorSystem_c_DisplayClass27_0>(get_class());
        }
    } // namespace MoonAnimatorSystem_c_DisplayClass27_0
} // namespace app::classes::types
