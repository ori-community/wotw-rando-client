#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/TextStyle__Class.h>
#include <Modloader/app/structs/TextStyle.h>
#include <Modloader/app/structs/TextStyle__Array.h>

namespace app::classes::types {
    namespace TextStyle {
        namespace {
            inline app::TextStyle__Class* type_info_ref = nullptr;
        }
        inline app::TextStyle__Class** type_info = &type_info_ref;
        inline app::TextStyle__Class* get_class() {
            return il2cpp::get_class<app::TextStyle__Class>(type_info, "CatlikeCoding.TextBox", "TextStyle");
        }
        inline app::TextStyle* create() {
            return il2cpp::create_object<app::TextStyle>(get_class());
        }
        inline app::TextStyle__Array* create_array(int size) {
            return il2cpp::array_new<app::TextStyle__Array>(get_class(), size);
        }
        inline app::TextStyle__Array* create_array(const std::vector<app::TextStyle*>& items) {
            return il2cpp::array_new<app::TextStyle__Array>(get_class(), items);
        }
    } // namespace TextStyle
} // namespace app::classes::types
