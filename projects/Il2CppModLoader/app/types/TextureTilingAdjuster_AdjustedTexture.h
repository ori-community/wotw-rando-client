#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace TextureTilingAdjuster_AdjustedTexture {
        extern IL2CPP_MODLOADER_DLLEXPORT app::TextureTilingAdjuster_AdjustedTexture__Class** type_info;
        inline app::TextureTilingAdjuster_AdjustedTexture__Class* get_class() {
            return il2cpp::get_nested_class<app::TextureTilingAdjuster_AdjustedTexture__Class>(type_info, "", "TextureTilingAdjuster", "AdjustedTexture");
        }
        inline app::TextureTilingAdjuster_AdjustedTexture* create() {
            return il2cpp::create_object<app::TextureTilingAdjuster_AdjustedTexture>(get_class());
        }
        inline app::TextureTilingAdjuster_AdjustedTexture__Boxed* box(app::TextureTilingAdjuster_AdjustedTexture value) {
            return il2cpp::box_value<app::TextureTilingAdjuster_AdjustedTexture__Boxed>(get_class(), value);
        }
        inline app::TextureTilingAdjuster_AdjustedTexture__Array* create_array(int size) {
            return il2cpp::array_new<app::TextureTilingAdjuster_AdjustedTexture__Array>(get_class(), size);
        }
        inline app::TextureTilingAdjuster_AdjustedTexture__Array* create_array(const std::vector<app::TextureTilingAdjuster_AdjustedTexture>& items) {
            return il2cpp::array_new<app::TextureTilingAdjuster_AdjustedTexture__Array>(get_class(), items);
        }
    } // namespace TextureTilingAdjuster_AdjustedTexture
} // namespace app::classes::types
