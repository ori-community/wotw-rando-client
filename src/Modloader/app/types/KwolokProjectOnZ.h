#pragma once
#include <Modloader/app/structs/KwolokProjectOnZ.h>
#include <Modloader/app/structs/KwolokProjectOnZ__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace KwolokProjectOnZ {
        inline app::KwolokProjectOnZ__Class** type_info() {
            static app::KwolokProjectOnZ__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::KwolokProjectOnZ__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::KwolokProjectOnZ__Class* get_class() {
            return il2cpp::get_class<app::KwolokProjectOnZ__Class>(type_info(), "", "KwolokProjectOnZ");
        }
        inline app::KwolokProjectOnZ* create() {
            return il2cpp::create_object<app::KwolokProjectOnZ>(get_class());
        }
    } // namespace KwolokProjectOnZ
} // namespace app::classes::types
