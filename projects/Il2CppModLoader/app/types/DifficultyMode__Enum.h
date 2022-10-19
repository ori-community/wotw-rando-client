#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace DifficultyMode__Enum {
        inline app::DifficultyMode__Enum__Class** type_info = (app::DifficultyMode__Enum__Class**)(modloader::win::memory::resolve_rva(0x047210F8));
        inline app::DifficultyMode__Enum__Class* get_class() {
            return il2cpp::get_class<app::DifficultyMode__Enum__Class>(type_info, "", "DifficultyMode");
        }
        inline app::DifficultyMode__Enum* create() {
            return il2cpp::create_object<app::DifficultyMode__Enum>(get_class());
        }
    } // namespace DifficultyMode__Enum
} // namespace app::classes::types
