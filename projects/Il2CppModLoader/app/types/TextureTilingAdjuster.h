#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace TextureTilingAdjuster {
        inline app::TextureTilingAdjuster__Class** type_info = (app::TextureTilingAdjuster__Class**)(modloader::win::memory::resolve_rva(0x04742BB8));
        inline app::TextureTilingAdjuster__Class* get_class() {
            return il2cpp::get_class<app::TextureTilingAdjuster__Class>(type_info, "", "TextureTilingAdjuster");
        }
        inline app::TextureTilingAdjuster* create() {
            return il2cpp::create_object<app::TextureTilingAdjuster>(get_class());
        }
        inline app::TextureTilingAdjuster__Array* create_array(int size) {
            return il2cpp::array_new<app::TextureTilingAdjuster__Array>(get_class(), size);
        }
        inline app::TextureTilingAdjuster__Array* create_array(const std::vector<app::TextureTilingAdjuster*>& items) {
            return il2cpp::array_new<app::TextureTilingAdjuster__Array>(get_class(), items);
        }
    } // namespace TextureTilingAdjuster
} // namespace app::classes::types
