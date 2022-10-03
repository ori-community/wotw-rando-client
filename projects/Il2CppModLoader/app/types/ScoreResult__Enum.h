#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace ScoreResult__Enum {
        extern IL2CPP_MODLOADER_DLLEXPORT app::ScoreResult__Enum__Class** type_info;
        inline app::ScoreResult__Enum__Class* get_class() {
            return il2cpp::get_class<app::ScoreResult__Enum__Class>(type_info, "", "ScoreResult");
        }
        inline app::ScoreResult__Enum* create() {
            return il2cpp::create_object<app::ScoreResult__Enum>(get_class());
        }
    } // namespace ScoreResult__Enum
} // namespace app::classes::types
