#pragma once
#include <Modloader/app/structs/TextureTilingAdjuster__Array.h>
#include <Modloader/app/structs/TextureTilingAdjuster__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace TextureTilingAdjuster__Array {
        inline app::TextureTilingAdjuster__Array__Class** type_info() {
            static app::TextureTilingAdjuster__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::TextureTilingAdjuster__Array__Class**)(modloader::win::memory::resolve_rva(0x047285F8));
            }
            return cache;
        }
        inline app::TextureTilingAdjuster__Array__Class* get_class() {
            return il2cpp::get_class<app::TextureTilingAdjuster__Array__Class>(type_info(), "", "TextureTilingAdjuster[]");
        }
        inline app::TextureTilingAdjuster__Array* create() {
            return il2cpp::create_object<app::TextureTilingAdjuster__Array>(get_class());
        }
    } // namespace TextureTilingAdjuster__Array
} // namespace app::classes::types
