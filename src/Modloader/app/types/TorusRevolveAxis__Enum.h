#pragma once
#include <Modloader/app/structs/TorusRevolveAxis__Enum.h>
#include <Modloader/app/structs/TorusRevolveAxis__Enum__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace TorusRevolveAxis__Enum {
        inline app::TorusRevolveAxis__Enum__Class** type_info() {
            static app::TorusRevolveAxis__Enum__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::TorusRevolveAxis__Enum__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::TorusRevolveAxis__Enum__Class* get_class() {
            return il2cpp::get_class<app::TorusRevolveAxis__Enum__Class>(type_info(), "CatlikeCoding.TextBox", "TorusRevolveAxis");
        }
        inline app::TorusRevolveAxis__Enum* create() {
            return il2cpp::create_object<app::TorusRevolveAxis__Enum>(get_class());
        }
    } // namespace TorusRevolveAxis__Enum
} // namespace app::classes::types
