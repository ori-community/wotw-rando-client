#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace TextureTilingAdjuster_AdjustedTexture {
        inline app::TextureTilingAdjuster_AdjustedTexture__Class** type_info = (app::TextureTilingAdjuster_AdjustedTexture__Class**)(modloader::win::memory::resolve_rva(0x0478E980));
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
