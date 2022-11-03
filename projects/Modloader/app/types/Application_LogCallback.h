#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace Application_LogCallback {
        inline app::Application_LogCallback__Class** type_info = (app::Application_LogCallback__Class**)(modloader::win::memory::resolve_rva(0x047985C0));
        inline app::Application_LogCallback__Class* get_class() {
            return il2cpp::get_nested_class<app::Application_LogCallback__Class>(type_info, "UnityEngine", "Application", "LogCallback");
        }
        inline app::Application_LogCallback* create() {
            return il2cpp::create_object<app::Application_LogCallback>(get_class());
        }
    } // namespace Application_LogCallback
} // namespace app::classes::types
