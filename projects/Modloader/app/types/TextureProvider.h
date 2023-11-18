#pragma once
#include <Modloader/app/structs/TextureProvider.h>
#include <Modloader/app/structs/TextureProvider__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace TextureProvider {
        inline app::TextureProvider__Class** type_info() {
            static app::TextureProvider__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::TextureProvider__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::TextureProvider__Class* get_class() {
            return il2cpp::get_class<app::TextureProvider__Class>(type_info(), "", "TextureProvider");
        }
        inline app::TextureProvider* create() {
            return il2cpp::create_object<app::TextureProvider>(get_class());
        }
    } // namespace TextureProvider
} // namespace app::classes::types
