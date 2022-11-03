#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace EndPointManager {
        inline app::EndPointManager__Class** type_info = (app::EndPointManager__Class**)(modloader::win::memory::resolve_rva(0x04734190));
        inline app::EndPointManager__Class* get_class() {
            return il2cpp::get_class<app::EndPointManager__Class>(type_info, "System.Net", "EndPointManager");
        }
        inline app::EndPointManager* create() {
            return il2cpp::create_object<app::EndPointManager>(get_class());
        }
    } // namespace EndPointManager
} // namespace app::classes::types
