#pragma once
#include <Modloader/app/structs/TextureOffsetModifier.h>
#include <Modloader/app/structs/TextureOffsetModifier__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace TextureOffsetModifier {
        inline app::TextureOffsetModifier__Class** type_info() {
            static app::TextureOffsetModifier__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::TextureOffsetModifier__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::TextureOffsetModifier__Class* get_class() {
            return il2cpp::get_class<app::TextureOffsetModifier__Class>(type_info(), "", "TextureOffsetModifier");
        }
        inline app::TextureOffsetModifier* create() {
            return il2cpp::create_object<app::TextureOffsetModifier>(get_class());
        }
    } // namespace TextureOffsetModifier
} // namespace app::classes::types
