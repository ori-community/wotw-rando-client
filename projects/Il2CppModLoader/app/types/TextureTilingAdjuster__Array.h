#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace TextureTilingAdjuster__Array {
        extern IL2CPP_MODLOADER_DLLEXPORT app::TextureTilingAdjuster__Array__Class** type_info;
        inline app::TextureTilingAdjuster__Array__Class* get_class() {
            return il2cpp::get_class<app::TextureTilingAdjuster__Array__Class>(type_info, "", "TextureTilingAdjuster[]");
        }
        inline app::TextureTilingAdjuster__Array* create() {
            return il2cpp::create_object<app::TextureTilingAdjuster__Array>(get_class());
        }
    } // namespace TextureTilingAdjuster__Array
} // namespace app::classes::types
