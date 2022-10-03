#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace SeinFirewhirlSpell {
        namespace {
            app::SeinFirewhirlSpell__Class* type_info_ref = nullptr;
        }
        app::SeinFirewhirlSpell__Class** type_info = &type_info_ref;
        inline app::SeinFirewhirlSpell__Class* get_class() {
            return il2cpp::get_class<app::SeinFirewhirlSpell__Class>(type_info, "", "SeinFirewhirlSpell");
        }
        inline app::SeinFirewhirlSpell* create() {
            return il2cpp::create_object<app::SeinFirewhirlSpell>(get_class());
        }
    } // namespace SeinFirewhirlSpell
} // namespace app::classes::types
