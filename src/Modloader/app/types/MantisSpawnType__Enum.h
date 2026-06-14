#pragma once
#include <Modloader/app/structs/MantisSpawnType__Enum.h>
#include <Modloader/app/structs/MantisSpawnType__Enum__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace MantisSpawnType__Enum {
        inline app::MantisSpawnType__Enum__Class** type_info() {
            static app::MantisSpawnType__Enum__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::MantisSpawnType__Enum__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::MantisSpawnType__Enum__Class* get_class() {
            return il2cpp::get_class<app::MantisSpawnType__Enum__Class>(type_info(), "", "MantisSpawnType");
        }
        inline app::MantisSpawnType__Enum* create() {
            return il2cpp::create_object<app::MantisSpawnType__Enum>(get_class());
        }
    } // namespace MantisSpawnType__Enum
} // namespace app::classes::types
