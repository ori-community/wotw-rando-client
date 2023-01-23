#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/WorldEventsManager__Class.h>
#include <Modloader/app/structs/WorldEventsManager.h>

namespace app::classes::types {
    namespace WorldEventsManager {
        inline app::WorldEventsManager__Class** type_info = (app::WorldEventsManager__Class**)(modloader::win::memory::resolve_rva(0x04735938));
        inline app::WorldEventsManager__Class* get_class() {
            return il2cpp::get_class<app::WorldEventsManager__Class>(type_info, "", "WorldEventsManager");
        }
        inline app::WorldEventsManager* create() {
            return il2cpp::create_object<app::WorldEventsManager>(get_class());
        }
    } // namespace WorldEventsManager
} // namespace app::classes::types
