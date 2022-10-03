#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace GhostRecorderData {
        extern IL2CPP_MODLOADER_DLLEXPORT app::GhostRecorderData__Class** type_info;
        inline app::GhostRecorderData__Class* get_class() {
            return il2cpp::get_class<app::GhostRecorderData__Class>(type_info, "", "GhostRecorderData");
        }
        inline app::GhostRecorderData* create() {
            return il2cpp::create_object<app::GhostRecorderData>(get_class());
        }
    } // namespace GhostRecorderData
} // namespace app::classes::types
