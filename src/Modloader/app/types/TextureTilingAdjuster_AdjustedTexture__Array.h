#pragma once
#include <Modloader/app/structs/TextureTilingAdjuster_AdjustedTexture__Array.h>
#include <Modloader/app/structs/TextureTilingAdjuster_AdjustedTexture__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace TextureTilingAdjuster_AdjustedTexture__Array {
        inline app::TextureTilingAdjuster_AdjustedTexture__Array__Class** type_info() {
            static app::TextureTilingAdjuster_AdjustedTexture__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::TextureTilingAdjuster_AdjustedTexture__Array__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::TextureTilingAdjuster_AdjustedTexture__Array__Class* get_class() {
            return il2cpp::get_class<app::TextureTilingAdjuster_AdjustedTexture__Array__Class>(type_info(), "", "TextureTilingAdjuster+AdjustedTexture[]");
        }
        inline app::TextureTilingAdjuster_AdjustedTexture__Array* create() {
            return il2cpp::create_object<app::TextureTilingAdjuster_AdjustedTexture__Array>(get_class());
        }
    } // namespace TextureTilingAdjuster_AdjustedTexture__Array
} // namespace app::classes::types
