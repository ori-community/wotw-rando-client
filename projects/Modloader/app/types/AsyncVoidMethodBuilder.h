#pragma once
#include <Modloader/app/structs/AsyncVoidMethodBuilder.h>
#include <Modloader/app/structs/AsyncVoidMethodBuilder__Boxed.h>
#include <Modloader/app/structs/AsyncVoidMethodBuilder__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace AsyncVoidMethodBuilder {
        inline app::AsyncVoidMethodBuilder__Class** type_info() {
            static app::AsyncVoidMethodBuilder__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::AsyncVoidMethodBuilder__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::AsyncVoidMethodBuilder__Class* get_class() {
            return il2cpp::get_class<app::AsyncVoidMethodBuilder__Class>(type_info(), "System.Runtime.CompilerServices", "AsyncVoidMethodBuilder");
        }
        inline app::AsyncVoidMethodBuilder* create() {
            return il2cpp::create_object<app::AsyncVoidMethodBuilder>(get_class());
        }
        inline app::AsyncVoidMethodBuilder__Boxed* box(app::AsyncVoidMethodBuilder value) {
            return il2cpp::box_value<app::AsyncVoidMethodBuilder__Boxed>(get_class(), value);
        }
    } // namespace AsyncVoidMethodBuilder
} // namespace app::classes::types
