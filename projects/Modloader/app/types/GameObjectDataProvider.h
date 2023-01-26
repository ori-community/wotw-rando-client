#pragma once
#include <Modloader/app/structs/GameObjectDataProvider.h>
#include <Modloader/app/structs/GameObjectDataProvider__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace GameObjectDataProvider {
        inline app::GameObjectDataProvider__Class** type_info() {
            static app::GameObjectDataProvider__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::GameObjectDataProvider__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::GameObjectDataProvider__Class* get_class() {
            return il2cpp::get_class<app::GameObjectDataProvider__Class>(type_info(), "", "GameObjectDataProvider");
        }
        inline app::GameObjectDataProvider* create() {
            return il2cpp::create_object<app::GameObjectDataProvider>(get_class());
        }
    } // namespace GameObjectDataProvider
} // namespace app::classes::types
