#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/LianaEntity_TongueState__Enum__Class.h>
#include <Modloader/app/structs/LianaEntity_TongueState__Enum.h>

namespace app::classes::types {
    namespace LianaEntity_TongueState__Enum {
        namespace {
            inline app::LianaEntity_TongueState__Enum__Class* type_info_ref = nullptr;
        }
        inline app::LianaEntity_TongueState__Enum__Class** type_info = &type_info_ref;
        inline app::LianaEntity_TongueState__Enum__Class* get_class() {
            return il2cpp::get_nested_class<app::LianaEntity_TongueState__Enum__Class>(type_info, "", "LianaEntity", "TongueState");
        }
        inline app::LianaEntity_TongueState__Enum* create() {
            return il2cpp::create_object<app::LianaEntity_TongueState__Enum>(get_class());
        }
    } // namespace LianaEntity_TongueState__Enum
} // namespace app::classes::types
