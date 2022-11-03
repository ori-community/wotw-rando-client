#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace _Activator {
        namespace {
            inline app::_Activator__Class* type_info_ref = nullptr;
        }
        inline app::_Activator__Class** type_info = &type_info_ref;
        inline app::_Activator__Class* get_class() {
            return il2cpp::get_class<app::_Activator__Class>(type_info, "System.Runtime.InteropServices", "_Activator");
        }
    } // namespace _Activator
} // namespace app::classes::types
