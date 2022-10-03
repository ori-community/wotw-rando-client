#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace XalService_AsyncCompletionRoutine {
        extern IL2CPP_MODLOADER_DLLEXPORT app::XalService_AsyncCompletionRoutine__Class** type_info;
        inline app::XalService_AsyncCompletionRoutine__Class* get_class() {
            return il2cpp::get_nested_class<app::XalService_AsyncCompletionRoutine__Class>(type_info, "Microsoft.Xbox.Services.Xal", "XalService", "AsyncCompletionRoutine");
        }
        inline app::XalService_AsyncCompletionRoutine* create() {
            return il2cpp::create_object<app::XalService_AsyncCompletionRoutine>(get_class());
        }
    } // namespace XalService_AsyncCompletionRoutine
} // namespace app::classes::types
