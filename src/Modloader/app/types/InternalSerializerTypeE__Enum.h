#pragma once
#include <Modloader/app/structs/InternalSerializerTypeE__Enum.h>
#include <Modloader/app/structs/InternalSerializerTypeE__Enum__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace InternalSerializerTypeE__Enum {
        inline app::InternalSerializerTypeE__Enum__Class** type_info() {
            static app::InternalSerializerTypeE__Enum__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::InternalSerializerTypeE__Enum__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::InternalSerializerTypeE__Enum__Class* get_class() {
            return il2cpp::get_class<app::InternalSerializerTypeE__Enum__Class>(type_info(), "System.Runtime.Serialization.Formatters.Binary", "InternalSerializerTypeE");
        }
        inline app::InternalSerializerTypeE__Enum* create() {
            return il2cpp::create_object<app::InternalSerializerTypeE__Enum>(get_class());
        }
    } // namespace InternalSerializerTypeE__Enum
} // namespace app::classes::types
