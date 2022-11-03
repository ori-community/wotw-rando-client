#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace CursorLockMode__Enum {
        namespace {
            inline app::CursorLockMode__Enum__Class* type_info_ref = nullptr;
        }
        inline app::CursorLockMode__Enum__Class** type_info = &type_info_ref;
        inline app::CursorLockMode__Enum__Class* get_class() {
            return il2cpp::get_class<app::CursorLockMode__Enum__Class>(type_info, "UnityEngine", "CursorLockMode");
        }
        inline app::CursorLockMode__Enum* create() {
            return il2cpp::create_object<app::CursorLockMode__Enum>(get_class());
        }
    } // namespace CursorLockMode__Enum
} // namespace app::classes::types
