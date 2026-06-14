#pragma once
#include <Modloader/app/structs/EInputActionOrigin__Enum.h>
#include <Modloader/app/structs/EInputActionOrigin__Enum__Array.h>
#include <Modloader/app/structs/EInputActionOrigin__Enum__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace EInputActionOrigin__Enum {
        inline app::EInputActionOrigin__Enum__Class** type_info() {
            static app::EInputActionOrigin__Enum__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::EInputActionOrigin__Enum__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::EInputActionOrigin__Enum__Class* get_class() {
            return il2cpp::get_class<app::EInputActionOrigin__Enum__Class>(type_info(), "Steamworks", "EInputActionOrigin");
        }
        inline app::EInputActionOrigin__Enum* create() {
            return il2cpp::create_object<app::EInputActionOrigin__Enum>(get_class());
        }
        inline app::EInputActionOrigin__Enum__Array* create_array(int size) {
            return il2cpp::array_new<app::EInputActionOrigin__Enum__Array>(get_class(), size);
        }
        inline app::EInputActionOrigin__Enum__Array* create_array(const std::vector<app::EInputActionOrigin__Enum*>& items) {
            return il2cpp::array_new<app::EInputActionOrigin__Enum__Array>(get_class(), items);
        }
    } // namespace EInputActionOrigin__Enum
} // namespace app::classes::types
