#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace TextEditor_TextEditOp__Enum {
        extern IL2CPP_MODLOADER_DLLEXPORT app::TextEditor_TextEditOp__Enum__Class** type_info;
        inline app::TextEditor_TextEditOp__Enum__Class* get_class() {
            return il2cpp::get_nested_class<app::TextEditor_TextEditOp__Enum__Class>(type_info, "UnityEngine", "TextEditor", "TextEditOp");
        }
        inline app::TextEditor_TextEditOp__Enum* create() {
            return il2cpp::create_object<app::TextEditor_TextEditOp__Enum>(get_class());
        }
        inline app::TextEditor_TextEditOp__Enum__Array* create_array(int size) {
            return il2cpp::array_new<app::TextEditor_TextEditOp__Enum__Array>(get_class(), size);
        }
        inline app::TextEditor_TextEditOp__Enum__Array* create_array(const std::vector<app::TextEditor_TextEditOp__Enum__Boxed*>& items) {
            return il2cpp::array_new<app::TextEditor_TextEditOp__Enum__Array>(get_class(), items);
        }
    } // namespace TextEditor_TextEditOp__Enum
} // namespace app::classes::types
