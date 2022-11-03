#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace ServerPhysicalSystemManager {
        inline app::ServerPhysicalSystemManager__Class** type_info = (app::ServerPhysicalSystemManager__Class**)(modloader::win::memory::resolve_rva(0x0474AB70));
        inline app::ServerPhysicalSystemManager__Class* get_class() {
            return il2cpp::get_class<app::ServerPhysicalSystemManager__Class>(type_info, "", "ServerPhysicalSystemManager");
        }
        inline app::ServerPhysicalSystemManager* create() {
            return il2cpp::create_object<app::ServerPhysicalSystemManager>(get_class());
        }
    } // namespace ServerPhysicalSystemManager
} // namespace app::classes::types
