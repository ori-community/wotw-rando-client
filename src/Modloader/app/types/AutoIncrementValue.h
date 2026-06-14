#pragma once
#include <Modloader/app/structs/AutoIncrementValue.h>
#include <Modloader/app/structs/AutoIncrementValue__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace AutoIncrementValue {
        inline app::AutoIncrementValue__Class** type_info() {
            static app::AutoIncrementValue__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::AutoIncrementValue__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::AutoIncrementValue__Class* get_class() {
            return il2cpp::get_class<app::AutoIncrementValue__Class>(type_info(), "System.Data", "AutoIncrementValue");
        }
        inline app::AutoIncrementValue* create() {
            return il2cpp::create_object<app::AutoIncrementValue>(get_class());
        }
    } // namespace AutoIncrementValue
} // namespace app::classes::types
