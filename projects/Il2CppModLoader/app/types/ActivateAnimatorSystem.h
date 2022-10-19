#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace ActivateAnimatorSystem {
        inline app::ActivateAnimatorSystem__Class** type_info = (app::ActivateAnimatorSystem__Class**)(modloader::win::memory::resolve_rva(0x04796D70));
        inline app::ActivateAnimatorSystem__Class* get_class() {
            return il2cpp::get_class<app::ActivateAnimatorSystem__Class>(type_info, "Moon.Timeline", "ActivateAnimatorSystem");
        }
        inline app::ActivateAnimatorSystem* create() {
            return il2cpp::create_object<app::ActivateAnimatorSystem>(get_class());
        }
    } // namespace ActivateAnimatorSystem
} // namespace app::classes::types
