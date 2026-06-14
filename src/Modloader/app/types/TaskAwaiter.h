#pragma once
#include <Modloader/app/structs/TaskAwaiter.h>
#include <Modloader/app/structs/TaskAwaiter__Boxed.h>
#include <Modloader/app/structs/TaskAwaiter__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace TaskAwaiter {
        inline app::TaskAwaiter__Class** type_info() {
            static app::TaskAwaiter__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::TaskAwaiter__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::TaskAwaiter__Class* get_class() {
            return il2cpp::get_class<app::TaskAwaiter__Class>(type_info(), "System.Runtime.CompilerServices", "TaskAwaiter");
        }
        inline app::TaskAwaiter* create() {
            return il2cpp::create_object<app::TaskAwaiter>(get_class());
        }
        inline app::TaskAwaiter__Boxed* box(app::TaskAwaiter value) {
            return il2cpp::box_value<app::TaskAwaiter__Boxed>(get_class(), value);
        }
    } // namespace TaskAwaiter
} // namespace app::classes::types
