#pragma once
#include <Modloader/app/structs/CCFont.h>
#include <Modloader/app/structs/CCFont__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace CCFont {
        inline app::CCFont__Class** type_info() {
            static app::CCFont__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::CCFont__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::CCFont__Class* get_class() {
            return il2cpp::get_class<app::CCFont__Class>(type_info(), "", "CCFont");
        }
        inline app::CCFont* create() {
            return il2cpp::create_object<app::CCFont>(get_class());
        }
    } // namespace CCFont
} // namespace app::classes::types
