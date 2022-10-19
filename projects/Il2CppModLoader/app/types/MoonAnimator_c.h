#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace MoonAnimator_c {
        inline app::MoonAnimator_c__Class** type_info = (app::MoonAnimator_c__Class**)(modloader::win::memory::resolve_rva(0x04709928));
        inline app::MoonAnimator_c__Class* get_class() {
            return il2cpp::get_nested_class<app::MoonAnimator_c__Class>(type_info, "Moon", "MoonAnimator", "<>c");
        }
        inline app::MoonAnimator_c* create() {
            return il2cpp::create_object<app::MoonAnimator_c>(get_class());
        }
    } // namespace MoonAnimator_c
} // namespace app::classes::types
