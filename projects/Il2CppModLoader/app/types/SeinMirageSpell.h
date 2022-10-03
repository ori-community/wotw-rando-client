#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace SeinMirageSpell {
        namespace {
            app::SeinMirageSpell__Class* type_info_ref = nullptr;
        }
        app::SeinMirageSpell__Class** type_info = &type_info_ref;
        inline app::SeinMirageSpell__Class* get_class() {
            return il2cpp::get_class<app::SeinMirageSpell__Class>(type_info, "", "SeinMirageSpell");
        }
        inline app::SeinMirageSpell* create() {
            return il2cpp::create_object<app::SeinMirageSpell>(get_class());
        }
    } // namespace SeinMirageSpell
} // namespace app::classes::types
