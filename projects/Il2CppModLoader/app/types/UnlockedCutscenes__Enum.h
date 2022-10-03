#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace UnlockedCutscenes__Enum {
        extern IL2CPP_MODLOADER_DLLEXPORT app::UnlockedCutscenes__Enum__Class** type_info;
        inline app::UnlockedCutscenes__Enum__Class* get_class() {
            return il2cpp::get_class<app::UnlockedCutscenes__Enum__Class>(type_info, "", "UnlockedCutscenes");
        }
        inline app::UnlockedCutscenes__Enum* create() {
            return il2cpp::create_object<app::UnlockedCutscenes__Enum>(get_class());
        }
    } // namespace UnlockedCutscenes__Enum
} // namespace app::classes::types
