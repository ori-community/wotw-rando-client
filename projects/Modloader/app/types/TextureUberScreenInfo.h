#pragma once
#include <Modloader/app/structs/TextureUberScreenInfo.h>
#include <Modloader/app/structs/TextureUberScreenInfo__Boxed.h>
#include <Modloader/app/structs/TextureUberScreenInfo__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace TextureUberScreenInfo {
        inline app::TextureUberScreenInfo__Class** type_info() {
            static app::TextureUberScreenInfo__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::TextureUberScreenInfo__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::TextureUberScreenInfo__Class* get_class() {
            return il2cpp::get_class<app::TextureUberScreenInfo__Class>(type_info(), "", "TextureUberScreenInfo");
        }
        inline app::TextureUberScreenInfo* create() {
            return il2cpp::create_object<app::TextureUberScreenInfo>(get_class());
        }
        inline app::TextureUberScreenInfo__Boxed* box(app::TextureUberScreenInfo value) {
            return il2cpp::box_value<app::TextureUberScreenInfo__Boxed>(get_class(), value);
        }
    } // namespace TextureUberScreenInfo
} // namespace app::classes::types
