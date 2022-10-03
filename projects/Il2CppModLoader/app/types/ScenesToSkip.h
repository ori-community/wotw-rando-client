#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace ScenesToSkip {
        extern IL2CPP_MODLOADER_DLLEXPORT app::ScenesToSkip__Class** type_info;
        inline app::ScenesToSkip__Class* get_class() {
            return il2cpp::get_class<app::ScenesToSkip__Class>(type_info, "", "ScenesToSkip");
        }
        inline app::ScenesToSkip* create() {
            return il2cpp::create_object<app::ScenesToSkip>(get_class());
        }
    } // namespace ScenesToSkip
} // namespace app::classes::types
