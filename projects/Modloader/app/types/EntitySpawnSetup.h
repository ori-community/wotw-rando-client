#pragma once
#include <Modloader/app/structs/EntitySpawnSetup.h>
#include <Modloader/app/structs/EntitySpawnSetup__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace EntitySpawnSetup {
        inline app::EntitySpawnSetup__Class** type_info() {
            static app::EntitySpawnSetup__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::EntitySpawnSetup__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::EntitySpawnSetup__Class* get_class() {
            return il2cpp::get_class<app::EntitySpawnSetup__Class>(type_info(), "", "EntitySpawnSetup");
        }
        inline app::EntitySpawnSetup* create() {
            return il2cpp::create_object<app::EntitySpawnSetup>(get_class());
        }
    } // namespace EntitySpawnSetup
} // namespace app::classes::types
