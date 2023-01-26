#pragma once
#include <Modloader/app/structs/Bootstring.h>
#include <Modloader/app/structs/Bootstring__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace Bootstring {
        inline app::Bootstring__Class** type_info() {
            static app::Bootstring__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::Bootstring__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::Bootstring__Class* get_class() {
            return il2cpp::get_class<app::Bootstring__Class>(type_info(), "System.Globalization", "Bootstring");
        }
        inline app::Bootstring* create() {
            return il2cpp::create_object<app::Bootstring>(get_class());
        }
    } // namespace Bootstring
} // namespace app::classes::types
