#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace ThreadSafeAttribute {
        namespace {
            app::ThreadSafeAttribute__Class* type_info_ref = nullptr;
        }
        app::ThreadSafeAttribute__Class** type_info = &type_info_ref;
        inline app::ThreadSafeAttribute__Class* get_class() {
            return il2cpp::get_class<app::ThreadSafeAttribute__Class>(type_info, "UnityEngine.Bindings", "ThreadSafeAttribute");
        }
        inline app::ThreadSafeAttribute* create() {
            return il2cpp::create_object<app::ThreadSafeAttribute>(get_class());
        }
    } // namespace ThreadSafeAttribute
} // namespace app::classes::types
