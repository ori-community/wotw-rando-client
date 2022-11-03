#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace HorizontalWrapMode__Enum {
        namespace {
            inline app::HorizontalWrapMode__Enum__Class* type_info_ref = nullptr;
        }
        inline app::HorizontalWrapMode__Enum__Class** type_info = &type_info_ref;
        inline app::HorizontalWrapMode__Enum__Class* get_class() {
            return il2cpp::get_class<app::HorizontalWrapMode__Enum__Class>(type_info, "UnityEngine", "HorizontalWrapMode");
        }
        inline app::HorizontalWrapMode__Enum* create() {
            return il2cpp::create_object<app::HorizontalWrapMode__Enum>(get_class());
        }
    } // namespace HorizontalWrapMode__Enum
} // namespace app::classes::types
