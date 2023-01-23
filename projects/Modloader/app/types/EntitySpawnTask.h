#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/EntitySpawnTask__Class.h>
#include <Modloader/app/structs/EntitySpawnTask.h>

namespace app::classes::types {
    namespace EntitySpawnTask {
        inline app::EntitySpawnTask__Class** type_info = (app::EntitySpawnTask__Class**)(modloader::win::memory::resolve_rva(0x047505A0));
        inline app::EntitySpawnTask__Class* get_class() {
            return il2cpp::get_class<app::EntitySpawnTask__Class>(type_info, "", "EntitySpawnTask");
        }
        inline app::EntitySpawnTask* create() {
            return il2cpp::create_object<app::EntitySpawnTask>(get_class());
        }
    } // namespace EntitySpawnTask
} // namespace app::classes::types
