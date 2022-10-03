#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace XTaskQueue {
        extern IL2CPP_MODLOADER_DLLEXPORT app::XTaskQueue__Class** type_info;
        inline app::XTaskQueue__Class* get_class() {
            return il2cpp::get_class<app::XTaskQueue__Class>(type_info, "XGamingRuntime.Interop", "XTaskQueue");
        }
        inline app::XTaskQueue* create() {
            return il2cpp::create_object<app::XTaskQueue>(get_class());
        }
    } // namespace XTaskQueue
} // namespace app::classes::types
