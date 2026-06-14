#pragma once
#include <Modloader/app/structs/MoonChar.h>
#include <Modloader/app/structs/MoonChar__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace MoonChar {
        inline app::MoonChar__Class** type_info() {
            static app::MoonChar__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::MoonChar__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::MoonChar__Class* get_class() {
            return il2cpp::get_class<app::MoonChar__Class>(type_info(), "Moon", "MoonChar");
        }
        inline app::MoonChar* create() {
            return il2cpp::create_object<app::MoonChar>(get_class());
        }
    } // namespace MoonChar
} // namespace app::classes::types
