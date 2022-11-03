#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace ItemGrant {
        namespace {
            inline app::ItemGrant__Class* type_info_ref = nullptr;
        }
        inline app::ItemGrant__Class** type_info = &type_info_ref;
        inline app::ItemGrant__Class* get_class() {
            return il2cpp::get_class<app::ItemGrant__Class>(type_info, "PlayFab.ServerModels", "ItemGrant");
        }
        inline app::ItemGrant* create() {
            return il2cpp::create_object<app::ItemGrant>(get_class());
        }
        inline app::ItemGrant__Array* create_array(int size) {
            return il2cpp::array_new<app::ItemGrant__Array>(get_class(), size);
        }
        inline app::ItemGrant__Array* create_array(const std::vector<app::ItemGrant*>& items) {
            return il2cpp::array_new<app::ItemGrant__Array>(get_class(), items);
        }
    } // namespace ItemGrant
} // namespace app::classes::types
