#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace Queue_QueueEnumerator {
        extern IL2CPP_MODLOADER_DLLEXPORT app::Queue_QueueEnumerator__Class** type_info;
        inline app::Queue_QueueEnumerator__Class* get_class() {
            return il2cpp::get_nested_class<app::Queue_QueueEnumerator__Class>(type_info, "System.Collections", "Queue", "QueueEnumerator");
        }
        inline app::Queue_QueueEnumerator* create() {
            return il2cpp::create_object<app::Queue_QueueEnumerator>(get_class());
        }
    } // namespace Queue_QueueEnumerator
} // namespace app::classes::types
