#pragma once
#include <Modloader/app/structs/LianaEntity_TongueState__Enum.h>
#include <Modloader/app/structs/LianaEntity_TongueState__Enum__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace LianaEntity_TongueState__Enum {
        inline app::LianaEntity_TongueState__Enum__Class** type_info() {
            static app::LianaEntity_TongueState__Enum__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::LianaEntity_TongueState__Enum__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::LianaEntity_TongueState__Enum__Class* get_class() {
            return il2cpp::get_nested_class<app::LianaEntity_TongueState__Enum__Class>(type_info(), "", "LianaEntity", "TongueState");
        }
        inline app::LianaEntity_TongueState__Enum* create() {
            return il2cpp::create_object<app::LianaEntity_TongueState__Enum>(get_class());
        }
    } // namespace LianaEntity_TongueState__Enum
} // namespace app::classes::types
