#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace CartItem__Array {
        namespace {
            inline app::CartItem__Array__Class* type_info_ref = nullptr;
        }
        inline app::CartItem__Array__Class** type_info = &type_info_ref;
        inline app::CartItem__Array__Class* get_class() {
            return il2cpp::get_class<app::CartItem__Array__Class>(type_info, "PlayFab.ClientModels", "CartItem[]");
        }
        inline app::CartItem__Array* create() {
            return il2cpp::create_object<app::CartItem__Array>(get_class());
        }
    } // namespace CartItem__Array
} // namespace app::classes::types
