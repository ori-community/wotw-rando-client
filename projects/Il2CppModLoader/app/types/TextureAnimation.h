#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace TextureAnimation {
        namespace {
            app::TextureAnimation__Class* type_info_ref = nullptr;
        }
        app::TextureAnimation__Class** type_info = &type_info_ref;
        inline app::TextureAnimation__Class* get_class() {
            return il2cpp::get_class<app::TextureAnimation__Class>(type_info, "", "TextureAnimation");
        }
        inline app::TextureAnimation* create() {
            return il2cpp::create_object<app::TextureAnimation>(get_class());
        }
        inline app::TextureAnimation__Array* create_array(int size) {
            return il2cpp::array_new<app::TextureAnimation__Array>(get_class(), size);
        }
    } // namespace TextureAnimation
} // namespace app::classes::types
