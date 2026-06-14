#pragma once
#include <Modloader/app/structs/GroupApplication.h>
#include <Modloader/app/structs/GroupApplication__Array.h>
#include <Modloader/app/structs/GroupApplication__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace GroupApplication {
        inline app::GroupApplication__Class** type_info() {
            static app::GroupApplication__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::GroupApplication__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::GroupApplication__Class* get_class() {
            return il2cpp::get_class<app::GroupApplication__Class>(type_info(), "PlayFab.GroupsModels", "GroupApplication");
        }
        inline app::GroupApplication* create() {
            return il2cpp::create_object<app::GroupApplication>(get_class());
        }
        inline app::GroupApplication__Array* create_array(int size) {
            return il2cpp::array_new<app::GroupApplication__Array>(get_class(), size);
        }
        inline app::GroupApplication__Array* create_array(const std::vector<app::GroupApplication*>& items) {
            return il2cpp::array_new<app::GroupApplication__Array>(get_class(), items);
        }
    } // namespace GroupApplication
} // namespace app::classes::types
