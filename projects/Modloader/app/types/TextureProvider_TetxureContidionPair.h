#pragma once
#include <Modloader/app/structs/TextureProvider_TetxureContidionPair.h>
#include <Modloader/app/structs/TextureProvider_TetxureContidionPair__Array.h>
#include <Modloader/app/structs/TextureProvider_TetxureContidionPair__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace TextureProvider_TetxureContidionPair {
        inline app::TextureProvider_TetxureContidionPair__Class** type_info() {
            static app::TextureProvider_TetxureContidionPair__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::TextureProvider_TetxureContidionPair__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::TextureProvider_TetxureContidionPair__Class* get_class() {
            return il2cpp::get_nested_class<app::TextureProvider_TetxureContidionPair__Class>(type_info(), "", "TextureProvider", "TetxureContidionPair");
        }
        inline app::TextureProvider_TetxureContidionPair* create() {
            return il2cpp::create_object<app::TextureProvider_TetxureContidionPair>(get_class());
        }
        inline app::TextureProvider_TetxureContidionPair__Array* create_array(int size) {
            return il2cpp::array_new<app::TextureProvider_TetxureContidionPair__Array>(get_class(), size);
        }
        inline app::TextureProvider_TetxureContidionPair__Array* create_array(const std::vector<app::TextureProvider_TetxureContidionPair*>& items) {
            return il2cpp::array_new<app::TextureProvider_TetxureContidionPair__Array>(get_class(), items);
        }
    } // namespace TextureProvider_TetxureContidionPair
} // namespace app::classes::types
