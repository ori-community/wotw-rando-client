#pragma once
#include <Modloader/app/structs/EntityKey_1.h>
#include <Modloader/app/structs/EntityKey_1__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace EntityKey_1 {
        inline app::EntityKey_1__Class** type_info() {
            static app::EntityKey_1__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::EntityKey_1__Class**)(modloader::win::memory::resolve_rva(0x04773100));
            }
            return cache;
        }
        inline app::EntityKey_1__Class* get_class() {
            return il2cpp::get_class<app::EntityKey_1__Class>(type_info(), "PlayFab.ClientModels", "EntityKey");
        }
        inline app::EntityKey_1* create() {
            return il2cpp::create_object<app::EntityKey_1>(get_class());
        }
    } // namespace EntityKey_1
} // namespace app::classes::types
