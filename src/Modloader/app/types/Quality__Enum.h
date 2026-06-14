#pragma once
#include <Modloader/app/structs/Quality__Enum.h>
#include <Modloader/app/structs/Quality__Enum__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace Quality__Enum {
        inline app::Quality__Enum__Class** type_info() {
            static app::Quality__Enum__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::Quality__Enum__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::Quality__Enum__Class* get_class() {
            return il2cpp::get_class<app::Quality__Enum__Class>(type_info(), "AmplifyColor", "Quality");
        }
        inline app::Quality__Enum* create() {
            return il2cpp::create_object<app::Quality__Enum>(get_class());
        }
    } // namespace Quality__Enum
} // namespace app::classes::types
