#pragma once
#include <Modloader/app/structs/ChakramProjectile_ChakramState__Enum.h>
#include <Modloader/app/structs/ChakramProjectile_ChakramState__Enum__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ChakramProjectile_ChakramState__Enum {
        inline app::ChakramProjectile_ChakramState__Enum__Class** type_info() {
            static app::ChakramProjectile_ChakramState__Enum__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::ChakramProjectile_ChakramState__Enum__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::ChakramProjectile_ChakramState__Enum__Class* get_class() {
            return il2cpp::get_nested_class<app::ChakramProjectile_ChakramState__Enum__Class>(type_info(), "", "ChakramProjectile", "ChakramState");
        }
        inline app::ChakramProjectile_ChakramState__Enum* create() {
            return il2cpp::create_object<app::ChakramProjectile_ChakramState__Enum>(get_class());
        }
    } // namespace ChakramProjectile_ChakramState__Enum
} // namespace app::classes::types
