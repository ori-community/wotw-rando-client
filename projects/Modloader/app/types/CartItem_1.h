#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace CartItem_1 {
        namespace {
            inline app::CartItem_1__Class* type_info_ref = nullptr;
        }
        inline app::CartItem_1__Class** type_info = &type_info_ref;
        inline app::CartItem_1__Class* get_class() {
            return il2cpp::get_class<app::CartItem_1__Class>(type_info, "PlayFab.PlayStreamModels", "CartItem");
        }
        inline app::CartItem_1* create() {
            return il2cpp::create_object<app::CartItem_1>(get_class());
        }
        inline app::CartItem_1__Array* create_array(int size) {
            return il2cpp::array_new<app::CartItem_1__Array>(get_class(), size);
        }
        inline app::CartItem_1__Array* create_array(const std::vector<app::CartItem_1*>& items) {
            return il2cpp::array_new<app::CartItem_1__Array>(get_class(), items);
        }
    } // namespace CartItem_1
} // namespace app::classes::types
