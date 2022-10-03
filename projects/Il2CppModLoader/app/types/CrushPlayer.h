#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace CrushPlayer {
        namespace {
            app::CrushPlayer__Class* type_info_ref = nullptr;
        }
        app::CrushPlayer__Class** type_info = &type_info_ref;
        inline app::CrushPlayer__Class* get_class() {
            return il2cpp::get_class<app::CrushPlayer__Class>(type_info, "", "CrushPlayer");
        }
        inline app::CrushPlayer* create() {
            return il2cpp::create_object<app::CrushPlayer>(get_class());
        }
    } // namespace CrushPlayer
} // namespace app::classes::types
