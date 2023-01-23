#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/_Thread__Class.h>

namespace app::classes::types {
    namespace _Thread {
        namespace {
            inline app::_Thread__Class* type_info_ref = nullptr;
        }
        inline app::_Thread__Class** type_info = &type_info_ref;
        inline app::_Thread__Class* get_class() {
            return il2cpp::get_class<app::_Thread__Class>(type_info, "System.Runtime.InteropServices", "_Thread");
        }
    } // namespace _Thread
} // namespace app::classes::types
