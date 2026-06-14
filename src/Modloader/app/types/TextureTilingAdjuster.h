#pragma once
#include <Modloader/app/structs/TextureTilingAdjuster.h>
#include <Modloader/app/structs/TextureTilingAdjuster__Array.h>
#include <Modloader/app/structs/TextureTilingAdjuster__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace TextureTilingAdjuster {
        inline app::TextureTilingAdjuster__Class** type_info() {
            static app::TextureTilingAdjuster__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::TextureTilingAdjuster__Class**)(modloader::win::memory::resolve_rva(0x04742BB8));
            }
            return cache;
        }
        inline app::TextureTilingAdjuster__Class* get_class() {
            return il2cpp::get_class<app::TextureTilingAdjuster__Class>(type_info(), "", "TextureTilingAdjuster");
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
