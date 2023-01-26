#pragma once
#include <Modloader/app/structs/GenericParameterAttributes__Enum.h>
#include <Modloader/app/structs/GenericParameterAttributes__Enum__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace GenericParameterAttributes__Enum {
        inline app::GenericParameterAttributes__Enum__Class** type_info() {
            static app::GenericParameterAttributes__Enum__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::GenericParameterAttributes__Enum__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::GenericParameterAttributes__Enum__Class* get_class() {
            return il2cpp::get_class<app::GenericParameterAttributes__Enum__Class>(type_info(), "System.Reflection", "GenericParameterAttributes");
        }
        inline app::GenericParameterAttributes__Enum* create() {
            return il2cpp::create_object<app::GenericParameterAttributes__Enum>(get_class());
        }
    } // namespace GenericParameterAttributes__Enum
} // namespace app::classes::types
