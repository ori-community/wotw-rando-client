#pragma once
#include <Modloader/app/structs/TextRenderer.h>
#include <Modloader/app/structs/TextRenderer__Array.h>
#include <Modloader/app/structs/TextRenderer__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace TextRenderer {
        inline app::TextRenderer__Class** type_info() {
            static app::TextRenderer__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::TextRenderer__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::TextRenderer__Class* get_class() {
            return il2cpp::get_class<app::TextRenderer__Class>(type_info(), "CatlikeCoding.TextBox", "TextRenderer");
        }
        inline app::TextRenderer* create() {
            return il2cpp::create_object<app::TextRenderer>(get_class());
        }
        inline app::TextRenderer__Array* create_array(int size) {
            return il2cpp::array_new<app::TextRenderer__Array>(get_class(), size);
        }
        inline app::TextRenderer__Array* create_array(const std::vector<app::TextRenderer*>& items) {
            return il2cpp::array_new<app::TextRenderer__Array>(get_class(), items);
        }
    } // namespace TextRenderer
} // namespace app::classes::types
