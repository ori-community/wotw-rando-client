#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace AutoRecorder {
        extern IL2CPP_MODLOADER_DLLEXPORT app::AutoRecorder__Class** type_info;
        inline app::AutoRecorder__Class* get_class() {
            return il2cpp::get_class<app::AutoRecorder__Class>(type_info, "", "AutoRecorder");
        }
        inline app::AutoRecorder* create() {
            return il2cpp::create_object<app::AutoRecorder>(get_class());
        }
    } // namespace AutoRecorder
} // namespace app::classes::types
