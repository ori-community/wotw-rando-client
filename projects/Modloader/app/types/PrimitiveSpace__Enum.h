#pragma once
#include <Modloader/app/structs/PrimitiveSpace__Enum.h>
#include <Modloader/app/structs/PrimitiveSpace__Enum__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace PrimitiveSpace__Enum {
        inline app::PrimitiveSpace__Enum__Class** type_info() {
            static app::PrimitiveSpace__Enum__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::PrimitiveSpace__Enum__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::PrimitiveSpace__Enum__Class* get_class() {
            return il2cpp::get_class<app::PrimitiveSpace__Enum__Class>(type_info(), "Moon", "PrimitiveSpace");
        }
        inline app::PrimitiveSpace__Enum* create() {
            return il2cpp::create_object<app::PrimitiveSpace__Enum>(get_class());
        }
    } // namespace PrimitiveSpace__Enum
} // namespace app::classes::types
