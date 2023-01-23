#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/GrantedItemInstance__Array__Class.h>
#include <Modloader/app/structs/GrantedItemInstance__Array.h>

namespace app::classes::types {
    namespace GrantedItemInstance__Array {
        namespace {
            inline app::GrantedItemInstance__Array__Class* type_info_ref = nullptr;
        }
        inline app::GrantedItemInstance__Array__Class** type_info = &type_info_ref;
        inline app::GrantedItemInstance__Array__Class* get_class() {
            return il2cpp::get_class<app::GrantedItemInstance__Array__Class>(type_info, "PlayFab.ServerModels", "GrantedItemInstance[]");
        }
        inline app::GrantedItemInstance__Array* create() {
            return il2cpp::create_object<app::GrantedItemInstance__Array>(get_class());
        }
    } // namespace GrantedItemInstance__Array
} // namespace app::classes::types
