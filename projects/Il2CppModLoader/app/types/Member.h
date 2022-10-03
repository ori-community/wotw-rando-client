#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace Member {
        namespace {
            app::Member__Class* type_info_ref = nullptr;
        }
        app::Member__Class** type_info = &type_info_ref;
        inline app::Member__Class* get_class() {
            return il2cpp::get_class<app::Member__Class>(type_info, "PlayFab.PlayStreamModels", "Member");
        }
        inline app::Member* create() {
            return il2cpp::create_object<app::Member>(get_class());
        }
        inline app::Member__Array* create_array(int size) {
            return il2cpp::array_new<app::Member__Array>(get_class(), size);
        }
    } // namespace Member
} // namespace app::classes::types
