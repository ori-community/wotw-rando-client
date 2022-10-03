#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace XAsyncCompletionRoutine {
        extern IL2CPP_MODLOADER_DLLEXPORT app::XAsyncCompletionRoutine__Class** type_info;
        inline app::XAsyncCompletionRoutine__Class* get_class() {
            return il2cpp::get_class<app::XAsyncCompletionRoutine__Class>(type_info, "XGamingRuntime.Interop", "XAsyncCompletionRoutine");
        }
        inline app::XAsyncCompletionRoutine* create() {
            return il2cpp::create_object<app::XAsyncCompletionRoutine>(get_class());
        }
    } // namespace XAsyncCompletionRoutine
} // namespace app::classes::types
