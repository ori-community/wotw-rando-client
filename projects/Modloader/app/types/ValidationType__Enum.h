#pragma once
#include <Modloader/app/structs/ValidationType__Enum.h>
#include <Modloader/app/structs/ValidationType__Enum__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ValidationType__Enum {
        inline app::ValidationType__Enum__Class** type_info() {
            static app::ValidationType__Enum__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::ValidationType__Enum__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::ValidationType__Enum__Class* get_class() {
            return il2cpp::get_class<app::ValidationType__Enum__Class>(type_info(), "System.Xml", "ValidationType");
        }
        inline app::ValidationType__Enum* create() {
            return il2cpp::create_object<app::ValidationType__Enum>(get_class());
        }
    } // namespace ValidationType__Enum
} // namespace app::classes::types
