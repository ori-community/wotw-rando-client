#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace PreloadScene {
        namespace {
            app::PreloadScene__Class* type_info_ref = nullptr;
        }
        app::PreloadScene__Class** type_info = &type_info_ref;
        inline app::PreloadScene__Class* get_class() {
            return il2cpp::get_class<app::PreloadScene__Class>(type_info, "Moon.Timeline", "PreloadScene");
        }
        inline app::PreloadScene* create() {
            return il2cpp::create_object<app::PreloadScene>(get_class());
        }
    } // namespace PreloadScene
} // namespace app::classes::types
