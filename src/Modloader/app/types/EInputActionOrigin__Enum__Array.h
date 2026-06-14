#pragma once
#include <Modloader/app/structs/EInputActionOrigin__Enum__Array.h>
#include <Modloader/app/structs/EInputActionOrigin__Enum__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace EInputActionOrigin__Enum__Array {
        inline app::EInputActionOrigin__Enum__Array__Class** type_info() {
            static app::EInputActionOrigin__Enum__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::EInputActionOrigin__Enum__Array__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::EInputActionOrigin__Enum__Array__Class* get_class() {
            return il2cpp::get_class<app::EInputActionOrigin__Enum__Array__Class>(type_info(), "Steamworks", "EInputActionOrigin[]");
        }
        inline app::EInputActionOrigin__Enum__Array* create() {
            return il2cpp::create_object<app::EInputActionOrigin__Enum__Array>(get_class());
        }
    } // namespace EInputActionOrigin__Enum__Array
} // namespace app::classes::types
