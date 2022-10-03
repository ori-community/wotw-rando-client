#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace WeakReference__Array {
        namespace {
            app::WeakReference__Array__Class* type_info_ref = nullptr;
        }
        app::WeakReference__Array__Class** type_info = &type_info_ref;
        inline app::WeakReference__Array__Class* get_class() {
            return il2cpp::get_class<app::WeakReference__Array__Class>(type_info, "System", "WeakReference[]");
        }
        inline app::WeakReference__Array* create() {
            return il2cpp::create_object<app::WeakReference__Array>(get_class());
        }
    } // namespace WeakReference__Array
} // namespace app::classes::types
