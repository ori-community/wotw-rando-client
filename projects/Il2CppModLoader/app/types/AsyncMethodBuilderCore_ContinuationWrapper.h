#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace AsyncMethodBuilderCore_ContinuationWrapper {
        extern IL2CPP_MODLOADER_DLLEXPORT app::AsyncMethodBuilderCore_ContinuationWrapper__Class** type_info;
        inline app::AsyncMethodBuilderCore_ContinuationWrapper__Class* get_class() {
            return il2cpp::get_nested_class<app::AsyncMethodBuilderCore_ContinuationWrapper__Class>(type_info, "System.Runtime.CompilerServices", "AsyncMethodBuilderCore", "ContinuationWrapper");
        }
        inline app::AsyncMethodBuilderCore_ContinuationWrapper* create() {
            return il2cpp::create_object<app::AsyncMethodBuilderCore_ContinuationWrapper>(get_class());
        }
    } // namespace AsyncMethodBuilderCore_ContinuationWrapper
} // namespace app::classes::types
