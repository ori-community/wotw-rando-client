#pragma once
#include <Modloader/app/structs/EntityKey_4.h>
#include <Modloader/app/structs/EntityKey_4__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace EntityKey_4 {
        inline app::EntityKey_4__Class** type_info() {
            static app::EntityKey_4__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::EntityKey_4__Class**)(modloader::win::memory::resolve_rva(0x047848D0));
            }
            return cache;
        }
        inline app::EntityKey_4__Class* get_class() {
            return il2cpp::get_class<app::EntityKey_4__Class>(type_info(), "PlayFab.EventsModels", "EntityKey");
        }
        inline app::EntityKey_4* create() {
            return il2cpp::create_object<app::EntityKey_4>(get_class());
        }
    } // namespace EntityKey_4
} // namespace app::classes::types
