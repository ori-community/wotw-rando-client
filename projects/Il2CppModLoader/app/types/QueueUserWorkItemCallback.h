#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace QueueUserWorkItemCallback {
        inline app::QueueUserWorkItemCallback__Class** type_info = (app::QueueUserWorkItemCallback__Class**)(modloader::win::memory::resolve_rva(0x04770E00));
        inline app::QueueUserWorkItemCallback__Class* get_class() {
            return il2cpp::get_class<app::QueueUserWorkItemCallback__Class>(type_info, "System.Threading", "QueueUserWorkItemCallback");
        }
        inline app::QueueUserWorkItemCallback* create() {
            return il2cpp::create_object<app::QueueUserWorkItemCallback>(get_class());
        }
    } // namespace QueueUserWorkItemCallback
} // namespace app::classes::types
