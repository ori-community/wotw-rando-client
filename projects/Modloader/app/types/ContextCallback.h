#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace ContextCallback {
        inline app::ContextCallback__Class** type_info = (app::ContextCallback__Class**)(modloader::win::memory::resolve_rva(0x04711530));
        inline app::ContextCallback__Class* get_class() {
            return il2cpp::get_class<app::ContextCallback__Class>(type_info, "System.Threading", "ContextCallback");
        }
        inline app::ContextCallback* create() {
            return il2cpp::create_object<app::ContextCallback>(get_class());
        }
    } // namespace ContextCallback
} // namespace app::classes::types
