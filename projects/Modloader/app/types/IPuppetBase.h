#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/IPuppetBase__Class.h>

namespace app::classes::types {
    namespace IPuppetBase {
        inline app::IPuppetBase__Class** type_info = (app::IPuppetBase__Class**)(modloader::win::memory::resolve_rva(0x04786860));
        inline app::IPuppetBase__Class* get_class() {
            return il2cpp::get_class<app::IPuppetBase__Class>(type_info, "", "IPuppetBase");
        }
    } // namespace IPuppetBase
} // namespace app::classes::types
