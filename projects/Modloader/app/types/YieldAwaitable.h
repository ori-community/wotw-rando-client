#pragma once
#include <Modloader/app/structs/YieldAwaitable.h>
#include <Modloader/app/structs/YieldAwaitable__Boxed.h>
#include <Modloader/app/structs/YieldAwaitable__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace YieldAwaitable {
        inline app::YieldAwaitable__Class** type_info() {
            static app::YieldAwaitable__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::YieldAwaitable__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::YieldAwaitable__Class* get_class() {
            return il2cpp::get_class<app::YieldAwaitable__Class>(type_info(), "System.Runtime.CompilerServices", "YieldAwaitable");
        }
        inline app::YieldAwaitable* create() {
            return il2cpp::create_object<app::YieldAwaitable>(get_class());
        }
        inline app::YieldAwaitable__Boxed* box(app::YieldAwaitable value) {
            return il2cpp::box_value<app::YieldAwaitable__Boxed>(get_class(), value);
        }
    } // namespace YieldAwaitable
} // namespace app::classes::types
