#pragma once
#include <Modloader/app/structs/TextRenderer_1.h>
#include <Modloader/app/structs/TextRenderer_1__Array.h>
#include <Modloader/app/structs/TextRenderer_1__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace TextRenderer_1 {
        inline app::TextRenderer_1__Class** type_info() {
            static app::TextRenderer_1__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::TextRenderer_1__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::TextRenderer_1__Class* get_class() {
            return il2cpp::get_class<app::TextRenderer_1__Class>(type_info(), "Moon.UI", "TextRenderer");
        }
        inline app::TextRenderer_1* create() {
            return il2cpp::create_object<app::TextRenderer_1>(get_class());
        }
        inline app::TextRenderer_1__Array* create_array(int size) {
            return il2cpp::array_new<app::TextRenderer_1__Array>(get_class(), size);
        }
        inline app::TextRenderer_1__Array* create_array(const std::vector<app::TextRenderer_1*>& items) {
            return il2cpp::array_new<app::TextRenderer_1__Array>(get_class(), items);
        }
    } // namespace TextRenderer_1
} // namespace app::classes::types
