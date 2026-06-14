#pragma once
#include <Modloader/app/structs/WindArea.h>
#include <Modloader/app/structs/WindArea__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace WindArea {
        inline app::WindArea__Class** type_info() {
            static app::WindArea__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::WindArea__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::WindArea__Class* get_class() {
            return il2cpp::get_class<app::WindArea__Class>(type_info(), "", "WindArea");
        }
        inline app::WindArea* create() {
            return il2cpp::create_object<app::WindArea>(get_class());
        }
    } // namespace WindArea
} // namespace app::classes::types
