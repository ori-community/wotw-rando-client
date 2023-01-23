#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/EntityKey_4__Class.h>
#include <Modloader/app/structs/EntityKey_4.h>

namespace app::classes::types {
    namespace EntityKey_4 {
        inline app::EntityKey_4__Class** type_info = (app::EntityKey_4__Class**)(modloader::win::memory::resolve_rva(0x047848D0));
        inline app::EntityKey_4__Class* get_class() {
            return il2cpp::get_class<app::EntityKey_4__Class>(type_info, "PlayFab.EventsModels", "EntityKey");
        }
        inline app::EntityKey_4* create() {
            return il2cpp::create_object<app::EntityKey_4>(get_class());
        }
    } // namespace EntityKey_4
} // namespace app::classes::types
