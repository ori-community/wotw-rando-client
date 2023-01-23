#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/StoreItem__Array__Class.h>
#include <Modloader/app/structs/StoreItem__Array.h>

namespace app::classes::types {
    namespace StoreItem__Array {
        namespace {
            inline app::StoreItem__Array__Class* type_info_ref = nullptr;
        }
        inline app::StoreItem__Array__Class** type_info = &type_info_ref;
        inline app::StoreItem__Array__Class* get_class() {
            return il2cpp::get_class<app::StoreItem__Array__Class>(type_info, "PlayFab.ClientModels", "StoreItem[]");
        }
        inline app::StoreItem__Array* create() {
            return il2cpp::create_object<app::StoreItem__Array>(get_class());
        }
    } // namespace StoreItem__Array
} // namespace app::classes::types
