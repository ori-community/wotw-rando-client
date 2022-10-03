#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace ZProjectionFollower {
        namespace {
            app::ZProjectionFollower__Class* type_info_ref = nullptr;
        }
        app::ZProjectionFollower__Class** type_info = &type_info_ref;
        inline app::ZProjectionFollower__Class* get_class() {
            return il2cpp::get_class<app::ZProjectionFollower__Class>(type_info, "", "ZProjectionFollower");
        }
        inline app::ZProjectionFollower* create() {
            return il2cpp::create_object<app::ZProjectionFollower>(get_class());
        }
    } // namespace ZProjectionFollower
} // namespace app::classes::types
