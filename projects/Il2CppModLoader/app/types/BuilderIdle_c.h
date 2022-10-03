#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace BuilderIdle_c {
        extern IL2CPP_MODLOADER_DLLEXPORT app::BuilderIdle_c__Class** type_info;
        inline app::BuilderIdle_c__Class* get_class() {
            return il2cpp::get_nested_class<app::BuilderIdle_c__Class>(type_info, "", "BuilderIdle", "<>c");
        }
        inline app::BuilderIdle_c* create() {
            return il2cpp::create_object<app::BuilderIdle_c>(get_class());
        }
    } // namespace BuilderIdle_c
} // namespace app::classes::types
