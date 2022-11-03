#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace _Type {
        namespace {
            inline app::_Type__Class* type_info_ref = nullptr;
        }
        inline app::_Type__Class** type_info = &type_info_ref;
        inline app::_Type__Class* get_class() {
            return il2cpp::get_class<app::_Type__Class>(type_info, "System.Runtime.InteropServices", "_Type");
        }
    } // namespace _Type
} // namespace app::classes::types
