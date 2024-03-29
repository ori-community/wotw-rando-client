#pragma once
#include <Modloader/app/structs/Member.h>
#include <Modloader/app/structs/Member__Array.h>
#include <Modloader/app/structs/Member__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace Member {
        inline app::Member__Class** type_info() {
            static app::Member__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::Member__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::Member__Class* get_class() {
            return il2cpp::get_class<app::Member__Class>(type_info(), "PlayFab.PlayStreamModels", "Member");
        }
        inline app::Member* create() {
            return il2cpp::create_object<app::Member>(get_class());
        }
        inline app::Member__Array* create_array(int size) {
            return il2cpp::array_new<app::Member__Array>(get_class(), size);
        }
        inline app::Member__Array* create_array(const std::vector<app::Member*>& items) {
            return il2cpp::array_new<app::Member__Array>(get_class(), items);
        }
    } // namespace Member
} // namespace app::classes::types
