#pragma once
#include <Modloader/app/structs/AVProWindowsMediaMovie_ColourFormat__Enum.h>
#include <Modloader/app/structs/AVProWindowsMediaMovie_ColourFormat__Enum__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace AVProWindowsMediaMovie_ColourFormat__Enum {
        inline app::AVProWindowsMediaMovie_ColourFormat__Enum__Class** type_info() {
            static app::AVProWindowsMediaMovie_ColourFormat__Enum__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::AVProWindowsMediaMovie_ColourFormat__Enum__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::AVProWindowsMediaMovie_ColourFormat__Enum__Class* get_class() {
            return il2cpp::get_nested_class<app::AVProWindowsMediaMovie_ColourFormat__Enum__Class>(type_info(), "", "AVProWindowsMediaMovie", "ColourFormat");
        }
        inline app::AVProWindowsMediaMovie_ColourFormat__Enum* create() {
            return il2cpp::create_object<app::AVProWindowsMediaMovie_ColourFormat__Enum>(get_class());
        }
    } // namespace AVProWindowsMediaMovie_ColourFormat__Enum
} // namespace app::classes::types
