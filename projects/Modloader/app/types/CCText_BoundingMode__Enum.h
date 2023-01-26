#pragma once
#include <Modloader/app/structs/CCText_BoundingMode__Enum.h>
#include <Modloader/app/structs/CCText_BoundingMode__Enum__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace CCText_BoundingMode__Enum {
        inline app::CCText_BoundingMode__Enum__Class** type_info() {
            static app::CCText_BoundingMode__Enum__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::CCText_BoundingMode__Enum__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::CCText_BoundingMode__Enum__Class* get_class() {
            return il2cpp::get_nested_class<app::CCText_BoundingMode__Enum__Class>(type_info(), "", "CCText", "BoundingMode");
        }
        inline app::CCText_BoundingMode__Enum* create() {
            return il2cpp::create_object<app::CCText_BoundingMode__Enum>(get_class());
        }
    } // namespace CCText_BoundingMode__Enum
} // namespace app::classes::types
