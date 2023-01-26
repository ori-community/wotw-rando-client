#pragma once
#include <Modloader/app/structs/EControllerSourceMode__Enum.h>
#include <Modloader/app/structs/EControllerSourceMode__Enum__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace EControllerSourceMode__Enum {
        inline app::EControllerSourceMode__Enum__Class** type_info() {
            static app::EControllerSourceMode__Enum__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::EControllerSourceMode__Enum__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::EControllerSourceMode__Enum__Class* get_class() {
            return il2cpp::get_class<app::EControllerSourceMode__Enum__Class>(type_info(), "Steamworks", "EControllerSourceMode");
        }
        inline app::EControllerSourceMode__Enum* create() {
            return il2cpp::create_object<app::EControllerSourceMode__Enum>(get_class());
        }
    } // namespace EControllerSourceMode__Enum
} // namespace app::classes::types
