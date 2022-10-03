#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace MoonAnimatorParallelUpdater {
        extern IL2CPP_MODLOADER_DLLEXPORT app::MoonAnimatorParallelUpdater__Class** type_info;
        inline app::MoonAnimatorParallelUpdater__Class* get_class() {
            return il2cpp::get_class<app::MoonAnimatorParallelUpdater__Class>(type_info, "Moon", "MoonAnimatorParallelUpdater");
        }
        inline app::MoonAnimatorParallelUpdater* create() {
            return il2cpp::create_object<app::MoonAnimatorParallelUpdater>(get_class());
        }
    } // namespace MoonAnimatorParallelUpdater
} // namespace app::classes::types
