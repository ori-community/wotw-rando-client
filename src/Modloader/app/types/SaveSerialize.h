#pragma once
#include <Modloader/app/structs/SaveSerialize.h>
#include <Modloader/app/structs/SaveSerialize__Array.h>
#include <Modloader/app/structs/SaveSerialize__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace SaveSerialize {
        inline app::SaveSerialize__Class** type_info() {
            static app::SaveSerialize__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::SaveSerialize__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::SaveSerialize__Class* get_class() {
            return il2cpp::get_class<app::SaveSerialize__Class>(type_info(), "", "SaveSerialize");
        }
        inline app::SaveSerialize* create() {
            return il2cpp::create_object<app::SaveSerialize>(get_class());
        }
        inline app::SaveSerialize__Array* create_array(int size) {
            return il2cpp::array_new<app::SaveSerialize__Array>(get_class(), size);
        }
        inline app::SaveSerialize__Array* create_array(const std::vector<app::SaveSerialize*>& items) {
            return il2cpp::array_new<app::SaveSerialize__Array>(get_class(), items);
        }
    } // namespace SaveSerialize
} // namespace app::classes::types
