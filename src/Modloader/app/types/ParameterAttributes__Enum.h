#pragma once
#include <Modloader/app/structs/ParameterAttributes__Enum.h>
#include <Modloader/app/structs/ParameterAttributes__Enum__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ParameterAttributes__Enum {
        inline app::ParameterAttributes__Enum__Class** type_info() {
            static app::ParameterAttributes__Enum__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::ParameterAttributes__Enum__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::ParameterAttributes__Enum__Class* get_class() {
            return il2cpp::get_class<app::ParameterAttributes__Enum__Class>(type_info(), "System.Reflection", "ParameterAttributes");
        }
        inline app::ParameterAttributes__Enum* create() {
            return il2cpp::create_object<app::ParameterAttributes__Enum>(get_class());
        }
    } // namespace ParameterAttributes__Enum
} // namespace app::classes::types
