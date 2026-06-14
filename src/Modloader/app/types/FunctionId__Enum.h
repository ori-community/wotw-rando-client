#pragma once
#include <Modloader/app/structs/FunctionId__Enum.h>
#include <Modloader/app/structs/FunctionId__Enum__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace FunctionId__Enum {
        inline app::FunctionId__Enum__Class** type_info() {
            static app::FunctionId__Enum__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::FunctionId__Enum__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::FunctionId__Enum__Class* get_class() {
            return il2cpp::get_class<app::FunctionId__Enum__Class>(type_info(), "System.Data", "FunctionId");
        }
        inline app::FunctionId__Enum* create() {
            return il2cpp::create_object<app::FunctionId__Enum>(get_class());
        }
    } // namespace FunctionId__Enum
} // namespace app::classes::types
