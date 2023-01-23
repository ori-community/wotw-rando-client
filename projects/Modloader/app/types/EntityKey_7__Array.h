#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/EntityKey_7__Array__Class.h>
#include <Modloader/app/structs/EntityKey_7__Array.h>

namespace app::classes::types {
    namespace EntityKey_7__Array {
        namespace {
            inline app::EntityKey_7__Array__Class* type_info_ref = nullptr;
        }
        inline app::EntityKey_7__Array__Class** type_info = &type_info_ref;
        inline app::EntityKey_7__Array__Class* get_class() {
            return il2cpp::get_class<app::EntityKey_7__Array__Class>(type_info, "PlayFab.ProfilesModels", "EntityKey[]");
        }
        inline app::EntityKey_7__Array* create() {
            return il2cpp::create_object<app::EntityKey_7__Array>(get_class());
        }
    } // namespace EntityKey_7__Array
} // namespace app::classes::types
