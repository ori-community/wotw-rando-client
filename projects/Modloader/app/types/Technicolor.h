#pragma once
#include <Modloader/app/structs/Technicolor.h>
#include <Modloader/app/structs/Technicolor__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace Technicolor {
        inline app::Technicolor__Class** type_info() {
            static app::Technicolor__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::Technicolor__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::Technicolor__Class* get_class() {
            return il2cpp::get_class<app::Technicolor__Class>(type_info(), "Colorful", "Technicolor");
        }
        inline app::Technicolor* create() {
            return il2cpp::create_object<app::Technicolor>(get_class());
        }
    } // namespace Technicolor
} // namespace app::classes::types
