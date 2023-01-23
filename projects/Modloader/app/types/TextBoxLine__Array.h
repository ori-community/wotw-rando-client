#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/TextBoxLine__Array__Class.h>
#include <Modloader/app/structs/TextBoxLine__Array.h>

namespace app::classes::types {
    namespace TextBoxLine__Array {
        namespace {
            inline app::TextBoxLine__Array__Class* type_info_ref = nullptr;
        }
        inline app::TextBoxLine__Array__Class** type_info = &type_info_ref;
        inline app::TextBoxLine__Array__Class* get_class() {
            return il2cpp::get_class<app::TextBoxLine__Array__Class>(type_info, "CatlikeCoding.TextBox", "TextBoxLine[]");
        }
        inline app::TextBoxLine__Array* create() {
            return il2cpp::create_object<app::TextBoxLine__Array>(get_class());
        }
    } // namespace TextBoxLine__Array
} // namespace app::classes::types
