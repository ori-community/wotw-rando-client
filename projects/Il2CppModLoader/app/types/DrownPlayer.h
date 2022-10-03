#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace DrownPlayer {
        namespace {
            app::DrownPlayer__Class* type_info_ref = nullptr;
        }
        app::DrownPlayer__Class** type_info = &type_info_ref;
        inline app::DrownPlayer__Class* get_class() {
            return il2cpp::get_class<app::DrownPlayer__Class>(type_info, "", "DrownPlayer");
        }
        inline app::DrownPlayer* create() {
            return il2cpp::create_object<app::DrownPlayer>(get_class());
        }
    } // namespace DrownPlayer
} // namespace app::classes::types
