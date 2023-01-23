#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/EntityKey_8__Class.h>
#include <Modloader/app/structs/EntityKey_8.h>

namespace app::classes::types {
    namespace EntityKey_8 {
        namespace {
            inline app::EntityKey_8__Class* type_info_ref = nullptr;
        }
        inline app::EntityKey_8__Class** type_info = &type_info_ref;
        inline app::EntityKey_8__Class* get_class() {
            return il2cpp::get_class<app::EntityKey_8__Class>(type_info, "PlayFab.ServerModels", "EntityKey");
        }
        inline app::EntityKey_8* create() {
            return il2cpp::create_object<app::EntityKey_8>(get_class());
        }
    } // namespace EntityKey_8
} // namespace app::classes::types
