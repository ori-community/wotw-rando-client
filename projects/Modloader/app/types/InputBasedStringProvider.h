#pragma once
#include <Modloader/app/structs/InputBasedStringProvider.h>
#include <Modloader/app/structs/InputBasedStringProvider__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace InputBasedStringProvider {
        inline app::InputBasedStringProvider__Class** type_info() {
            static app::InputBasedStringProvider__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::InputBasedStringProvider__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::InputBasedStringProvider__Class* get_class() {
            return il2cpp::get_class<app::InputBasedStringProvider__Class>(type_info(), "", "InputBasedStringProvider");
        }
        inline app::InputBasedStringProvider* create() {
            return il2cpp::create_object<app::InputBasedStringProvider>(get_class());
        }
    } // namespace InputBasedStringProvider
} // namespace app::classes::types
