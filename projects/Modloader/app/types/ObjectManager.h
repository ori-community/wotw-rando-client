#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/ObjectManager__Class.h>
#include <Modloader/app/structs/ObjectManager.h>

namespace app::classes::types {
    namespace ObjectManager {
        inline app::ObjectManager__Class** type_info = (app::ObjectManager__Class**)(modloader::win::memory::resolve_rva(0x0470D628));
        inline app::ObjectManager__Class* get_class() {
            return il2cpp::get_class<app::ObjectManager__Class>(type_info, "System.Runtime.Serialization", "ObjectManager");
        }
        inline app::ObjectManager* create() {
            return il2cpp::create_object<app::ObjectManager>(get_class());
        }
    } // namespace ObjectManager
} // namespace app::classes::types
