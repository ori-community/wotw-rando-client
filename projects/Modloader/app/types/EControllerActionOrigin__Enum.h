#pragma once
#include <Modloader/app/structs/EControllerActionOrigin__Enum.h>
#include <Modloader/app/structs/EControllerActionOrigin__Enum__Array.h>
#include <Modloader/app/structs/EControllerActionOrigin__Enum__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace EControllerActionOrigin__Enum {
        inline app::EControllerActionOrigin__Enum__Class** type_info() {
            static app::EControllerActionOrigin__Enum__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::EControllerActionOrigin__Enum__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::EControllerActionOrigin__Enum__Class* get_class() {
            return il2cpp::get_class<app::EControllerActionOrigin__Enum__Class>(type_info(), "Steamworks", "EControllerActionOrigin");
        }
        inline app::EControllerActionOrigin__Enum* create() {
            return il2cpp::create_object<app::EControllerActionOrigin__Enum>(get_class());
        }
        inline app::EControllerActionOrigin__Enum__Array* create_array(int size) {
            return il2cpp::array_new<app::EControllerActionOrigin__Enum__Array>(get_class(), size);
        }
        inline app::EControllerActionOrigin__Enum__Array* create_array(const std::vector<app::EControllerActionOrigin__Enum*>& items) {
            return il2cpp::array_new<app::EControllerActionOrigin__Enum__Array>(get_class(), items);
        }
    } // namespace EControllerActionOrigin__Enum
} // namespace app::classes::types
