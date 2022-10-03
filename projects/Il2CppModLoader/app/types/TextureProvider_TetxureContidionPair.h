#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace TextureProvider_TetxureContidionPair {
        namespace {
            app::TextureProvider_TetxureContidionPair__Class* type_info_ref = nullptr;
        }
        app::TextureProvider_TetxureContidionPair__Class** type_info = &type_info_ref;
        inline app::TextureProvider_TetxureContidionPair__Class* get_class() {
            return il2cpp::get_nested_class<app::TextureProvider_TetxureContidionPair__Class>(type_info, "", "TextureProvider", "TetxureContidionPair");
        }
        inline app::TextureProvider_TetxureContidionPair* create() {
            return il2cpp::create_object<app::TextureProvider_TetxureContidionPair>(get_class());
        }
        inline app::TextureProvider_TetxureContidionPair__Array* create_array(int size) {
            return il2cpp::array_new<app::TextureProvider_TetxureContidionPair__Array>(get_class(), size);
        }
    } // namespace TextureProvider_TetxureContidionPair
} // namespace app::classes::types
