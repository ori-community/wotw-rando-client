#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace XTaskQueue {
        inline app::XTaskQueue__Class** type_info = (app::XTaskQueue__Class**)(modloader::win::memory::resolve_rva(0x047690D8));
        inline app::XTaskQueue__Class* get_class() {
            return il2cpp::get_class<app::XTaskQueue__Class>(type_info, "XGamingRuntime.Interop", "XTaskQueue");
        }
        inline app::XTaskQueue* create() {
            return il2cpp::create_object<app::XTaskQueue>(get_class());
        }
    } // namespace XTaskQueue
} // namespace app::classes::types
