#pragma once
#include <Modloader/app/structs/TextRenderer_1__Array.h>
#include <Modloader/app/structs/TextRenderer_1__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace TextRenderer_1__Array {
        inline app::TextRenderer_1__Array__Class** type_info() {
            static app::TextRenderer_1__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::TextRenderer_1__Array__Class**)(modloader::win::memory::resolve_rva(0x047975D0));
            }
            return cache;
        }
        inline app::TextRenderer_1__Array__Class* get_class() {
            return il2cpp::get_class<app::TextRenderer_1__Array__Class>(type_info(), "Moon.UI", "TextRenderer[]");
        }
        inline app::TextRenderer_1__Array* create() {
            return il2cpp::create_object<app::TextRenderer_1__Array>(get_class());
        }
    } // namespace TextRenderer_1__Array
} // namespace app::classes::types
