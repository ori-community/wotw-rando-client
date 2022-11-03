#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace YieldAwaitable_YieldAwaiter {
        inline app::YieldAwaitable_YieldAwaiter__Class** type_info = (app::YieldAwaitable_YieldAwaiter__Class**)(modloader::win::memory::resolve_rva(0x04718160));
        inline app::YieldAwaitable_YieldAwaiter__Class* get_class() {
            return il2cpp::get_nested_class<app::YieldAwaitable_YieldAwaiter__Class>(type_info, "System.Runtime.CompilerServices", "YieldAwaitable", "YieldAwaiter");
        }
        inline app::YieldAwaitable_YieldAwaiter* create() {
            return il2cpp::create_object<app::YieldAwaitable_YieldAwaiter>(get_class());
        }
        inline app::YieldAwaitable_YieldAwaiter__Boxed* box(app::YieldAwaitable_YieldAwaiter value) {
            return il2cpp::box_value<app::YieldAwaitable_YieldAwaiter__Boxed>(get_class(), value);
        }
    } // namespace YieldAwaitable_YieldAwaiter
} // namespace app::classes::types
