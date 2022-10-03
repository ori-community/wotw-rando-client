#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace QueueUserWorkItemCallback {
        extern IL2CPP_MODLOADER_DLLEXPORT app::QueueUserWorkItemCallback__Class** type_info;
        inline app::QueueUserWorkItemCallback__Class* get_class() {
            return il2cpp::get_class<app::QueueUserWorkItemCallback__Class>(type_info, "System.Threading", "QueueUserWorkItemCallback");
        }
        inline app::QueueUserWorkItemCallback* create() {
            return il2cpp::create_object<app::QueueUserWorkItemCallback>(get_class());
        }
    } // namespace QueueUserWorkItemCallback
} // namespace app::classes::types
