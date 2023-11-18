#pragma once
#include <Modloader/app/structs/SetupState__Array.h>
#include <Modloader/app/structs/SetupState__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace SetupState__Array {
        inline app::SetupState__Array__Class** type_info() {
            static app::SetupState__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::SetupState__Array__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::SetupState__Array__Class* get_class() {
            return il2cpp::get_class<app::SetupState__Array__Class>(type_info(), "", "SetupState[]");
        }
        inline app::SetupState__Array* create() {
            return il2cpp::create_object<app::SetupState__Array>(get_class());
        }
    } // namespace SetupState__Array
} // namespace app::classes::types
