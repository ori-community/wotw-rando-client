#pragma once
#include <Modloader/app/structs/TextEditor_TextEditOp__Enum.h>
#include <Modloader/app/structs/TextEditor_TextEditOp__Enum__Array.h>
#include <Modloader/app/structs/TextEditor_TextEditOp__Enum__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace TextEditor_TextEditOp__Enum {
        inline app::TextEditor_TextEditOp__Enum__Class** type_info() {
            static app::TextEditor_TextEditOp__Enum__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::TextEditor_TextEditOp__Enum__Class**)(modloader::win::memory::resolve_rva(0x047675D0));
            }
            return cache;
        }
        inline app::TextEditor_TextEditOp__Enum__Class* get_class() {
            return il2cpp::get_nested_class<app::TextEditor_TextEditOp__Enum__Class>(type_info(), "UnityEngine", "TextEditor", "TextEditOp");
        }
        inline app::TextEditor_TextEditOp__Enum* create() {
            return il2cpp::create_object<app::TextEditor_TextEditOp__Enum>(get_class());
        }
        inline app::TextEditor_TextEditOp__Enum__Array* create_array(int size) {
            return il2cpp::array_new<app::TextEditor_TextEditOp__Enum__Array>(get_class(), size);
        }
        inline app::TextEditor_TextEditOp__Enum__Array* create_array(const std::vector<app::TextEditor_TextEditOp__Enum*>& items) {
            return il2cpp::array_new<app::TextEditor_TextEditOp__Enum__Array>(get_class(), items);
        }
    } // namespace TextEditor_TextEditOp__Enum
} // namespace app::classes::types
