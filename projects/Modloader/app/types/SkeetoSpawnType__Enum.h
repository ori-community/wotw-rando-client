#pragma once
#include <Modloader/app/structs/SkeetoSpawnType__Enum.h>
#include <Modloader/app/structs/SkeetoSpawnType__Enum__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace SkeetoSpawnType__Enum {
        inline app::SkeetoSpawnType__Enum__Class** type_info() {
            static app::SkeetoSpawnType__Enum__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::SkeetoSpawnType__Enum__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::SkeetoSpawnType__Enum__Class* get_class() {
            return il2cpp::get_class<app::SkeetoSpawnType__Enum__Class>(type_info(), "", "SkeetoSpawnType");
        }
        inline app::SkeetoSpawnType__Enum* create() {
            return il2cpp::create_object<app::SkeetoSpawnType__Enum>(get_class());
        }
    } // namespace SkeetoSpawnType__Enum
} // namespace app::classes::types
