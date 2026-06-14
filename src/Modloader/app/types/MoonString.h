#pragma once
#include <Modloader/app/structs/MoonString.h>
#include <Modloader/app/structs/MoonString__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace MoonString {
        inline app::MoonString__Class** type_info() {
            static app::MoonString__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::MoonString__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::MoonString__Class* get_class() {
            return il2cpp::get_class<app::MoonString__Class>(type_info(), "Moon", "MoonString");
        }
        inline app::MoonString* create() {
            return il2cpp::create_object<app::MoonString>(get_class());
        }
    } // namespace MoonString
} // namespace app::classes::types
