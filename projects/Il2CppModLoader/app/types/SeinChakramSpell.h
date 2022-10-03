#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace SeinChakramSpell {
        namespace {
            app::SeinChakramSpell__Class* type_info_ref = nullptr;
        }
        app::SeinChakramSpell__Class** type_info = &type_info_ref;
        inline app::SeinChakramSpell__Class* get_class() {
            return il2cpp::get_class<app::SeinChakramSpell__Class>(type_info, "", "SeinChakramSpell");
        }
        inline app::SeinChakramSpell* create() {
            return il2cpp::create_object<app::SeinChakramSpell>(get_class());
        }
    } // namespace SeinChakramSpell
} // namespace app::classes::types
