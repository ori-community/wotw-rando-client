#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/ThreadHelper__Class.h>
#include <Modloader/app/structs/ThreadHelper.h>

namespace app::classes::types {
    namespace ThreadHelper {
        inline app::ThreadHelper__Class** type_info = (app::ThreadHelper__Class**)(modloader::win::memory::resolve_rva(0x04777D28));
        inline app::ThreadHelper__Class* get_class() {
            return il2cpp::get_class<app::ThreadHelper__Class>(type_info, "System.Threading", "ThreadHelper");
        }
        inline app::ThreadHelper* create() {
            return il2cpp::create_object<app::ThreadHelper>(get_class());
        }
    } // namespace ThreadHelper
} // namespace app::classes::types
