#pragma once
#include <Modloader/app/structs/TextRenderer__Array.h>
#include <Modloader/app/structs/TextRenderer__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace TextRenderer__Array {
        inline app::TextRenderer__Array__Class** type_info() {
            static app::TextRenderer__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::TextRenderer__Array__Class**)(modloader::win::memory::resolve_rva(0x04733490));
            }
            return cache;
        }
        inline app::TextRenderer__Array__Class* get_class() {
            return il2cpp::get_class<app::TextRenderer__Array__Class>(type_info(), "CatlikeCoding.TextBox", "TextRenderer[]");
        }
        inline app::TextRenderer__Array* create() {
            return il2cpp::create_object<app::TextRenderer__Array>(get_class());
        }
    } // namespace TextRenderer__Array
} // namespace app::classes::types
