#pragma once
#include <Modloader/app/structs/Number.h>
#include <Modloader/app/structs/Number__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace Number {
        inline app::Number__Class** type_info() {
            static app::Number__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::Number__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::Number__Class* get_class() {
            return il2cpp::get_class<app::Number__Class>(type_info(), "System", "Number");
        }
        inline app::Number* create() {
            return il2cpp::create_object<app::Number>(get_class());
        }
    } // namespace Number
} // namespace app::classes::types
