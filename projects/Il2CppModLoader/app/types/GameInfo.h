#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace GameInfo {
        namespace {
            app::GameInfo__Class* type_info_ref = nullptr;
        }
        app::GameInfo__Class** type_info = &type_info_ref;
        inline app::GameInfo__Class* get_class() {
            return il2cpp::get_class<app::GameInfo__Class>(type_info, "PlayFab.ClientModels", "GameInfo");
        }
        inline app::GameInfo* create() {
            return il2cpp::create_object<app::GameInfo>(get_class());
        }
        inline app::GameInfo__Array* create_array(int size) {
            return il2cpp::array_new<app::GameInfo__Array>(get_class(), size);
        }
    } // namespace GameInfo
} // namespace app::classes::types
