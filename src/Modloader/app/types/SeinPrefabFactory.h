#pragma once
#include <Modloader/app/structs/SeinPrefabFactory.h>
#include <Modloader/app/structs/SeinPrefabFactory__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace SeinPrefabFactory {
        inline app::SeinPrefabFactory__Class** type_info() {
            static app::SeinPrefabFactory__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::SeinPrefabFactory__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::SeinPrefabFactory__Class* get_class() {
            return il2cpp::get_class<app::SeinPrefabFactory__Class>(type_info(), "", "SeinPrefabFactory");
        }
        inline app::SeinPrefabFactory* create() {
            return il2cpp::create_object<app::SeinPrefabFactory>(get_class());
        }
    } // namespace SeinPrefabFactory
} // namespace app::classes::types
