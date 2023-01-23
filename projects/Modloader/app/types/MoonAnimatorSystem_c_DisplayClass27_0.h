#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/MoonAnimatorSystem_c_DisplayClass27_0__Class.h>
#include <Modloader/app/structs/MoonAnimatorSystem_c_DisplayClass27_0.h>

namespace app::classes::types {
    namespace MoonAnimatorSystem_c_DisplayClass27_0 {
        inline app::MoonAnimatorSystem_c_DisplayClass27_0__Class** type_info = (app::MoonAnimatorSystem_c_DisplayClass27_0__Class**)(modloader::win::memory::resolve_rva(0x04703A08));
        inline app::MoonAnimatorSystem_c_DisplayClass27_0__Class* get_class() {
            return il2cpp::get_nested_class<app::MoonAnimatorSystem_c_DisplayClass27_0__Class>(type_info, "Moon", "MoonAnimatorSystem", "<>c__DisplayClass27_0");
        }
        inline app::MoonAnimatorSystem_c_DisplayClass27_0* create() {
            return il2cpp::create_object<app::MoonAnimatorSystem_c_DisplayClass27_0>(get_class());
        }
    } // namespace MoonAnimatorSystem_c_DisplayClass27_0
} // namespace app::classes::types
