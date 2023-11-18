#pragma once
#include <Modloader/app/structs/IRectProvider__Array.h>
#include <Modloader/app/structs/IRectProvider__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace IRectProvider__Array {
        inline app::IRectProvider__Array__Class** type_info() {
            static app::IRectProvider__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::IRectProvider__Array__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::IRectProvider__Array__Class* get_class() {
            return il2cpp::get_class<app::IRectProvider__Array__Class>(type_info(), "Moon", "IRectProvider[]");
        }
        inline app::IRectProvider__Array* create() {
            return il2cpp::create_object<app::IRectProvider__Array>(get_class());
        }
    } // namespace IRectProvider__Array
} // namespace app::classes::types
