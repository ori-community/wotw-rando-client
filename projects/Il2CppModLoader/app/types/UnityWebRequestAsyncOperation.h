#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace UnityWebRequestAsyncOperation {
        namespace {
            app::UnityWebRequestAsyncOperation__Class* type_info_ref = nullptr;
        }
        app::UnityWebRequestAsyncOperation__Class** type_info = &type_info_ref;
        inline app::UnityWebRequestAsyncOperation__Class* get_class() {
            return il2cpp::get_class<app::UnityWebRequestAsyncOperation__Class>(type_info, "UnityEngine.Networking", "UnityWebRequestAsyncOperation");
        }
        inline app::UnityWebRequestAsyncOperation* create() {
            return il2cpp::create_object<app::UnityWebRequestAsyncOperation>(get_class());
        }
    } // namespace UnityWebRequestAsyncOperation
} // namespace app::classes::types
