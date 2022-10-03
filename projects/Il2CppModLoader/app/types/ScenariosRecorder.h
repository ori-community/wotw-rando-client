#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace ScenariosRecorder {
        extern IL2CPP_MODLOADER_DLLEXPORT app::ScenariosRecorder__Class** type_info;
        inline app::ScenariosRecorder__Class* get_class() {
            return il2cpp::get_class<app::ScenariosRecorder__Class>(type_info, "", "ScenariosRecorder");
        }
        inline app::ScenariosRecorder* create() {
            return il2cpp::create_object<app::ScenariosRecorder>(get_class());
        }
    } // namespace ScenariosRecorder
} // namespace app::classes::types
