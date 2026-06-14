#pragma once
#include <Modloader/app/structs/ContactEmailInfo_1.h>
#include <Modloader/app/structs/ContactEmailInfo_1__Array.h>
#include <Modloader/app/structs/ContactEmailInfo_1__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ContactEmailInfo_1 {
        inline app::ContactEmailInfo_1__Class** type_info() {
            static app::ContactEmailInfo_1__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::ContactEmailInfo_1__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::ContactEmailInfo_1__Class* get_class() {
            return il2cpp::get_class<app::ContactEmailInfo_1__Class>(type_info(), "PlayFab.PlayStreamModels", "ContactEmailInfo");
        }
        inline app::ContactEmailInfo_1* create() {
            return il2cpp::create_object<app::ContactEmailInfo_1>(get_class());
        }
        inline app::ContactEmailInfo_1__Array* create_array(int size) {
            return il2cpp::array_new<app::ContactEmailInfo_1__Array>(get_class(), size);
        }
        inline app::ContactEmailInfo_1__Array* create_array(const std::vector<app::ContactEmailInfo_1*>& items) {
            return il2cpp::array_new<app::ContactEmailInfo_1__Array>(get_class(), items);
        }
    } // namespace ContactEmailInfo_1
} // namespace app::classes::types
