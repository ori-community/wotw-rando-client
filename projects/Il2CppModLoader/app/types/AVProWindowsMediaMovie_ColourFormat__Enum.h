#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace AVProWindowsMediaMovie_ColourFormat__Enum {
        namespace {
            app::AVProWindowsMediaMovie_ColourFormat__Enum__Class* type_info_ref = nullptr;
        }
        app::AVProWindowsMediaMovie_ColourFormat__Enum__Class** type_info = &type_info_ref;
        inline app::AVProWindowsMediaMovie_ColourFormat__Enum__Class* get_class() {
            return il2cpp::get_nested_class<app::AVProWindowsMediaMovie_ColourFormat__Enum__Class>(type_info, "", "AVProWindowsMediaMovie", "ColourFormat");
        }
        inline app::AVProWindowsMediaMovie_ColourFormat__Enum* create() {
            return il2cpp::create_object<app::AVProWindowsMediaMovie_ColourFormat__Enum>(get_class());
        }
    } // namespace AVProWindowsMediaMovie_ColourFormat__Enum
} // namespace app::classes::types
