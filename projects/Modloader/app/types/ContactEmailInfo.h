#pragma once
#include <Modloader/app/structs/ContactEmailInfo.h>
#include <Modloader/app/structs/ContactEmailInfo__Array.h>
#include <Modloader/app/structs/ContactEmailInfo__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ContactEmailInfo {
        inline app::ContactEmailInfo__Class** type_info() {
            static app::ContactEmailInfo__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::ContactEmailInfo__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::ContactEmailInfo__Class* get_class() {
            return il2cpp::get_class<app::ContactEmailInfo__Class>(type_info(), "PlayFab.ServerModels", "ContactEmailInfo");
        }
        inline app::ContactEmailInfo* create() {
            return il2cpp::create_object<app::ContactEmailInfo>(get_class());
        }
        inline app::ContactEmailInfo__Array* create_array(int size) {
            return il2cpp::array_new<app::ContactEmailInfo__Array>(get_class(), size);
        }
        inline app::ContactEmailInfo__Array* create_array(const std::vector<app::ContactEmailInfo*>& items) {
            return il2cpp::array_new<app::ContactEmailInfo__Array>(get_class(), items);
        }
    } // namespace ContactEmailInfo
} // namespace app::classes::types
