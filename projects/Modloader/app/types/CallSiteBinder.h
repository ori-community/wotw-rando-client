#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace CallSiteBinder {
        inline app::CallSiteBinder__Class** type_info = (app::CallSiteBinder__Class**)(modloader::win::memory::resolve_rva(0x0471AB58));
        inline app::CallSiteBinder__Class* get_class() {
            return il2cpp::get_class<app::CallSiteBinder__Class>(type_info, "System.Runtime.CompilerServices", "CallSiteBinder");
        }
        inline app::CallSiteBinder* create() {
            return il2cpp::create_object<app::CallSiteBinder>(get_class());
        }
    } // namespace CallSiteBinder
} // namespace app::classes::types
