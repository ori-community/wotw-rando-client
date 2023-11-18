#pragma once
#include <Modloader/app/structs/TextureAnimation.h>
#include <Modloader/app/structs/TextureAnimation__Array.h>
#include <Modloader/app/structs/TextureAnimation__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace TextureAnimation {
        inline app::TextureAnimation__Class** type_info() {
            static app::TextureAnimation__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::TextureAnimation__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::TextureAnimation__Class* get_class() {
            return il2cpp::get_class<app::TextureAnimation__Class>(type_info(), "", "TextureAnimation");
        }
        inline app::TextureAnimation* create() {
            return il2cpp::create_object<app::TextureAnimation>(get_class());
        }
        inline app::TextureAnimation__Array* create_array(int size) {
            return il2cpp::array_new<app::TextureAnimation__Array>(get_class(), size);
        }
        inline app::TextureAnimation__Array* create_array(const std::vector<app::TextureAnimation*>& items) {
            return il2cpp::array_new<app::TextureAnimation__Array>(get_class(), items);
        }
    } // namespace TextureAnimation
} // namespace app::classes::types
