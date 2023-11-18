#pragma once
#include <Modloader/app/structs/TextBox__Array.h>
#include <Modloader/app/structs/TextBox__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace TextBox__Array {
        inline app::TextBox__Array__Class** type_info() {
            static app::TextBox__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::TextBox__Array__Class**)(modloader::win::memory::resolve_rva(0x04783650));
            }
            return cache;
        }
        inline app::TextBox__Array__Class* get_class() {
            return il2cpp::get_class<app::TextBox__Array__Class>(type_info(), "CatlikeCoding.TextBox", "TextBox[]");
        }
        inline app::TextBox__Array* create() {
            return il2cpp::create_object<app::TextBox__Array>(get_class());
        }
    } // namespace TextBox__Array
} // namespace app::classes::types
