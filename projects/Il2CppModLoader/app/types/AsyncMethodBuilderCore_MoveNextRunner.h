#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace AsyncMethodBuilderCore_MoveNextRunner {
        extern IL2CPP_MODLOADER_DLLEXPORT app::AsyncMethodBuilderCore_MoveNextRunner__Class** type_info;
        inline app::AsyncMethodBuilderCore_MoveNextRunner__Class* get_class() {
            return il2cpp::get_nested_class<app::AsyncMethodBuilderCore_MoveNextRunner__Class>(type_info, "System.Runtime.CompilerServices", "AsyncMethodBuilderCore", "MoveNextRunner");
        }
        inline app::AsyncMethodBuilderCore_MoveNextRunner* create() {
            return il2cpp::create_object<app::AsyncMethodBuilderCore_MoveNextRunner>(get_class());
        }
    } // namespace AsyncMethodBuilderCore_MoveNextRunner
} // namespace app::classes::types
