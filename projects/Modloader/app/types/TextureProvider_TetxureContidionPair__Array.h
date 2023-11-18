#pragma once
#include <Modloader/app/structs/TextureProvider_TetxureContidionPair__Array.h>
#include <Modloader/app/structs/TextureProvider_TetxureContidionPair__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace TextureProvider_TetxureContidionPair__Array {
        inline app::TextureProvider_TetxureContidionPair__Array__Class** type_info() {
            static app::TextureProvider_TetxureContidionPair__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::TextureProvider_TetxureContidionPair__Array__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::TextureProvider_TetxureContidionPair__Array__Class* get_class() {
            return il2cpp::get_class<app::TextureProvider_TetxureContidionPair__Array__Class>(type_info(), "", "TextureProvider+TetxureContidionPair[]");
        }
        inline app::TextureProvider_TetxureContidionPair__Array* create() {
            return il2cpp::create_object<app::TextureProvider_TetxureContidionPair__Array>(get_class());
        }
    } // namespace TextureProvider_TetxureContidionPair__Array
} // namespace app::classes::types
