#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace HornBugSlamEffects {
        inline app::HornBugSlamEffects__Class** type_info = (app::HornBugSlamEffects__Class**)(modloader::win::memory::resolve_rva(0x0471AB88));
        inline app::HornBugSlamEffects__Class* get_class() {
            return il2cpp::get_class<app::HornBugSlamEffects__Class>(type_info, "", "HornBugSlamEffects");
        }
        inline app::HornBugSlamEffects* create() {
            return il2cpp::create_object<app::HornBugSlamEffects>(get_class());
        }
    } // namespace HornBugSlamEffects
} // namespace app::classes::types
