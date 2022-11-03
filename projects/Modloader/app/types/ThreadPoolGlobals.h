#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace ThreadPoolGlobals {
        inline app::ThreadPoolGlobals__Class** type_info = (app::ThreadPoolGlobals__Class**)(modloader::win::memory::resolve_rva(0x0473E498));
        inline app::ThreadPoolGlobals__Class* get_class() {
            return il2cpp::get_class<app::ThreadPoolGlobals__Class>(type_info, "System.Threading", "ThreadPoolGlobals");
        }
        inline app::ThreadPoolGlobals* create() {
            return il2cpp::create_object<app::ThreadPoolGlobals>(get_class());
        }
    } // namespace ThreadPoolGlobals
} // namespace app::classes::types
