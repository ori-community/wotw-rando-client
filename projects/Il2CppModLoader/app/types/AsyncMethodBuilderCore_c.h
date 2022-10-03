#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace AsyncMethodBuilderCore_c {
        extern IL2CPP_MODLOADER_DLLEXPORT app::AsyncMethodBuilderCore_c__Class** type_info;
        inline app::AsyncMethodBuilderCore_c__Class* get_class() {
            return il2cpp::get_nested_class<app::AsyncMethodBuilderCore_c__Class>(type_info, "System.Runtime.CompilerServices", "AsyncMethodBuilderCore", "<>c");
        }
        inline app::AsyncMethodBuilderCore_c* create() {
            return il2cpp::create_object<app::AsyncMethodBuilderCore_c>(get_class());
        }
    } // namespace AsyncMethodBuilderCore_c
} // namespace app::classes::types
