#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/EntityKey_5__Array__Class.h>
#include <Modloader/app/structs/EntityKey_5__Array.h>

namespace app::classes::types {
    namespace EntityKey_5__Array {
        namespace {
            inline app::EntityKey_5__Array__Class* type_info_ref = nullptr;
        }
        inline app::EntityKey_5__Array__Class** type_info = &type_info_ref;
        inline app::EntityKey_5__Array__Class* get_class() {
            return il2cpp::get_class<app::EntityKey_5__Array__Class>(type_info, "PlayFab.GroupsModels", "EntityKey[]");
        }
        inline app::EntityKey_5__Array* create() {
            return il2cpp::create_object<app::EntityKey_5__Array>(get_class());
        }
    } // namespace EntityKey_5__Array
} // namespace app::classes::types
