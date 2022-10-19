#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace TextureUberScreenInfo {
        namespace {
            inline app::TextureUberScreenInfo__Class* type_info_ref = nullptr;
        }
        inline app::TextureUberScreenInfo__Class** type_info = &type_info_ref;
        inline app::TextureUberScreenInfo__Class* get_class() {
            return il2cpp::get_class<app::TextureUberScreenInfo__Class>(type_info, "", "TextureUberScreenInfo");
        }
        inline app::TextureUberScreenInfo* create() {
            return il2cpp::create_object<app::TextureUberScreenInfo>(get_class());
        }
        inline app::TextureUberScreenInfo__Boxed* box(app::TextureUberScreenInfo value) {
            return il2cpp::box_value<app::TextureUberScreenInfo__Boxed>(get_class(), value);
        }
    } // namespace TextureUberScreenInfo
} // namespace app::classes::types
