#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace TextRenderer {
        namespace {
            inline app::TextRenderer__Class* type_info_ref = nullptr;
        }
        inline app::TextRenderer__Class** type_info = &type_info_ref;
        inline app::TextRenderer__Class* get_class() {
            return il2cpp::get_class<app::TextRenderer__Class>(type_info, "CatlikeCoding.TextBox", "TextRenderer");
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
