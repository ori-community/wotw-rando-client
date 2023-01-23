#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/_Assembly__Class.h>

namespace app::classes::types {
    namespace _Assembly {
        namespace {
            inline app::_Assembly__Class* type_info_ref = nullptr;
        }
        inline app::_Assembly__Class** type_info = &type_info_ref;
        inline app::_Assembly__Class* get_class() {
            return il2cpp::get_class<app::_Assembly__Class>(type_info, "System.Runtime.InteropServices", "_Assembly");
        }
    } // namespace _Assembly
} // namespace app::classes::types
