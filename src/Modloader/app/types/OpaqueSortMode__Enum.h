#pragma once
#include <Modloader/app/structs/OpaqueSortMode__Enum.h>
#include <Modloader/app/structs/OpaqueSortMode__Enum__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace OpaqueSortMode__Enum {
        inline app::OpaqueSortMode__Enum__Class** type_info() {
            static app::OpaqueSortMode__Enum__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::OpaqueSortMode__Enum__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::OpaqueSortMode__Enum__Class* get_class() {
            return il2cpp::get_class<app::OpaqueSortMode__Enum__Class>(type_info(), "UnityEngine.Rendering", "OpaqueSortMode");
        }
        inline app::OpaqueSortMode__Enum* create() {
            return il2cpp::create_object<app::OpaqueSortMode__Enum>(get_class());
        }
    } // namespace OpaqueSortMode__Enum
} // namespace app::classes::types
