#pragma once
#include <Modloader/app/structs/CodegenOptions__Enum.h>
#include <Modloader/app/structs/CodegenOptions__Enum__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace CodegenOptions__Enum {
        inline app::CodegenOptions__Enum__Class** type_info() {
            static app::CodegenOptions__Enum__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::CodegenOptions__Enum__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::CodegenOptions__Enum__Class* get_class() {
            return il2cpp::get_class<app::CodegenOptions__Enum__Class>(type_info(), "UnityEngine.Bindings", "CodegenOptions");
        }
        inline app::CodegenOptions__Enum* create() {
            return il2cpp::create_object<app::CodegenOptions__Enum>(get_class());
        }
    } // namespace CodegenOptions__Enum
} // namespace app::classes::types
