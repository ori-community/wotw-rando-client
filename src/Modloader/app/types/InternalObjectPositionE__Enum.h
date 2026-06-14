#pragma once
#include <Modloader/app/structs/InternalObjectPositionE__Enum.h>
#include <Modloader/app/structs/InternalObjectPositionE__Enum__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace InternalObjectPositionE__Enum {
        inline app::InternalObjectPositionE__Enum__Class** type_info() {
            static app::InternalObjectPositionE__Enum__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::InternalObjectPositionE__Enum__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::InternalObjectPositionE__Enum__Class* get_class() {
            return il2cpp::get_class<app::InternalObjectPositionE__Enum__Class>(type_info(), "System.Runtime.Serialization.Formatters.Binary", "InternalObjectPositionE");
        }
        inline app::InternalObjectPositionE__Enum* create() {
            return il2cpp::create_object<app::InternalObjectPositionE__Enum>(get_class());
        }
    } // namespace InternalObjectPositionE__Enum
} // namespace app::classes::types
