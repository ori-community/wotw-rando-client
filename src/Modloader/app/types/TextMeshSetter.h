#pragma once
#include <Modloader/app/structs/TextMeshSetter.h>
#include <Modloader/app/structs/TextMeshSetter__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace TextMeshSetter {
        inline app::TextMeshSetter__Class** type_info() {
            static app::TextMeshSetter__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::TextMeshSetter__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::TextMeshSetter__Class* get_class() {
            return il2cpp::get_class<app::TextMeshSetter__Class>(type_info(), "", "TextMeshSetter");
        }
        inline app::TextMeshSetter* create() {
            return il2cpp::create_object<app::TextMeshSetter>(get_class());
        }
    } // namespace TextMeshSetter
} // namespace app::classes::types
