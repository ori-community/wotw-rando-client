#pragma once
#include <Modloader/app/structs/ObjectManager.h>
#include <Modloader/app/structs/ObjectManager__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ObjectManager {
        inline app::ObjectManager__Class** type_info() {
            static app::ObjectManager__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::ObjectManager__Class**)(modloader::win::memory::resolve_rva(0x0470D628));
            }
            return cache;
        }
        inline app::ObjectManager__Class* get_class() {
            return il2cpp::get_class<app::ObjectManager__Class>(type_info(), "System.Runtime.Serialization", "ObjectManager");
        }
        inline app::ObjectManager* create() {
            return il2cpp::create_object<app::ObjectManager>(get_class());
        }
    } // namespace ObjectManager
} // namespace app::classes::types
