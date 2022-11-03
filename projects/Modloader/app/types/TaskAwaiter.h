#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace TaskAwaiter {
        namespace {
            inline app::TaskAwaiter__Class* type_info_ref = nullptr;
        }
        inline app::TaskAwaiter__Class** type_info = &type_info_ref;
        inline app::TaskAwaiter__Class* get_class() {
            return il2cpp::get_class<app::TaskAwaiter__Class>(type_info, "System.Runtime.CompilerServices", "TaskAwaiter");
        }
        inline app::TaskAwaiter* create() {
            return il2cpp::create_object<app::TaskAwaiter>(get_class());
        }
        inline app::TaskAwaiter__Boxed* box(app::TaskAwaiter value) {
            return il2cpp::box_value<app::TaskAwaiter__Boxed>(get_class(), value);
        }
    } // namespace TaskAwaiter
} // namespace app::classes::types
