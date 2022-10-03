#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace Diff {
        extern IL2CPP_MODLOADER_DLLEXPORT app::Diff__Class** type_info;
        inline app::Diff__Class* get_class() {
            return il2cpp::get_class<app::Diff__Class>(type_info, "SystemIntegration.Synchronizer", "Diff");
        }
        inline app::Diff* create() {
            return il2cpp::create_object<app::Diff>(get_class());
        }
    } // namespace Diff
} // namespace app::classes::types
