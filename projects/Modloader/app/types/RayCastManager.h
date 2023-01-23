#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/RayCastManager__Class.h>
#include <Modloader/app/structs/RayCastManager.h>

namespace app::classes::types {
    namespace RayCastManager {
        inline app::RayCastManager__Class** type_info = (app::RayCastManager__Class**)(modloader::win::memory::resolve_rva(0x04778C50));
        inline app::RayCastManager__Class* get_class() {
            return il2cpp::get_class<app::RayCastManager__Class>(type_info, "", "RayCastManager");
        }
        inline app::RayCastManager* create() {
            return il2cpp::create_object<app::RayCastManager>(get_class());
        }
    } // namespace RayCastManager
} // namespace app::classes::types
