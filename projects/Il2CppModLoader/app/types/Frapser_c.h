#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace Frapser_c {
        extern IL2CPP_MODLOADER_DLLEXPORT app::Frapser_c__Class** type_info;
        inline app::Frapser_c__Class* get_class() {
            return il2cpp::get_nested_class<app::Frapser_c__Class>(type_info, "", "Frapser", "<>c");
        }
        inline app::Frapser_c* create() {
            return il2cpp::create_object<app::Frapser_c>(get_class());
        }
    } // namespace Frapser_c
} // namespace app::classes::types
