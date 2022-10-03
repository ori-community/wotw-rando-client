#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace TextureProvider_TetxureContidionPair__Array {
        namespace {
            app::TextureProvider_TetxureContidionPair__Array__Class* type_info_ref = nullptr;
        }
        app::TextureProvider_TetxureContidionPair__Array__Class** type_info = &type_info_ref;
        inline app::TextureProvider_TetxureContidionPair__Array__Class* get_class() {
            return il2cpp::get_class<app::TextureProvider_TetxureContidionPair__Array__Class>(type_info, "", "TextureProvider+TetxureContidionPair[]");
        }
        inline app::TextureProvider_TetxureContidionPair__Array* create() {
            return il2cpp::create_object<app::TextureProvider_TetxureContidionPair__Array>(get_class());
        }
    } // namespace TextureProvider_TetxureContidionPair__Array
} // namespace app::classes::types
