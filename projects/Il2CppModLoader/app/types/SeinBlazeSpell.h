#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace SeinBlazeSpell {
        namespace {
            app::SeinBlazeSpell__Class* type_info_ref = nullptr;
        }
        app::SeinBlazeSpell__Class** type_info = &type_info_ref;
        inline app::SeinBlazeSpell__Class* get_class() {
            return il2cpp::get_class<app::SeinBlazeSpell__Class>(type_info, "", "SeinBlazeSpell");
        }
        inline app::SeinBlazeSpell* create() {
            return il2cpp::create_object<app::SeinBlazeSpell>(get_class());
        }
    } // namespace SeinBlazeSpell
} // namespace app::classes::types
