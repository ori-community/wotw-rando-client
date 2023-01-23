#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/DestroyManager__Class.h>
#include <Modloader/app/structs/DestroyManager.h>

namespace app::classes::types {
    namespace DestroyManager {
        inline app::DestroyManager__Class** type_info = (app::DestroyManager__Class**)(modloader::win::memory::resolve_rva(0x0474F278));
        inline app::DestroyManager__Class* get_class() {
            return il2cpp::get_class<app::DestroyManager__Class>(type_info, "", "DestroyManager");
        }
        inline app::DestroyManager* create() {
            return il2cpp::create_object<app::DestroyManager>(get_class());
        }
    } // namespace DestroyManager
} // namespace app::classes::types
