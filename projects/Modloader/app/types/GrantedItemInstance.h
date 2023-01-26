#pragma once
#include <Modloader/app/structs/GrantedItemInstance.h>
#include <Modloader/app/structs/GrantedItemInstance__Array.h>
#include <Modloader/app/structs/GrantedItemInstance__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace GrantedItemInstance {
        inline app::GrantedItemInstance__Class** type_info() {
            static app::GrantedItemInstance__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::GrantedItemInstance__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::GrantedItemInstance__Class* get_class() {
            return il2cpp::get_class<app::GrantedItemInstance__Class>(type_info(), "PlayFab.ServerModels", "GrantedItemInstance");
        }
        inline app::GrantedItemInstance* create() {
            return il2cpp::create_object<app::GrantedItemInstance>(get_class());
        }
        inline app::GrantedItemInstance__Array* create_array(int size) {
            return il2cpp::array_new<app::GrantedItemInstance__Array>(get_class(), size);
        }
        inline app::GrantedItemInstance__Array* create_array(const std::vector<app::GrantedItemInstance*>& items) {
            return il2cpp::array_new<app::GrantedItemInstance__Array>(get_class(), items);
        }
    } // namespace GrantedItemInstance
} // namespace app::classes::types
