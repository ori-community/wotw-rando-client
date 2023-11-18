#pragma once
#include <Modloader/app/structs/ControlList.h>
#include <Modloader/app/structs/ControlList__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ControlList {
        inline app::ControlList__Class** type_info() {
            static app::ControlList__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::ControlList__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::ControlList__Class* get_class() {
            return il2cpp::get_class<app::ControlList__Class>(type_info(), "", "ControlList");
        }
        inline app::ControlList* create() {
            return il2cpp::create_object<app::ControlList>(get_class());
        }
    } // namespace ControlList
} // namespace app::classes::types
