#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace UnityWebRequestAsyncOperation {
        namespace {
            inline app::UnityWebRequestAsyncOperation__Class* type_info_ref = nullptr;
        }
        inline app::UnityWebRequestAsyncOperation__Class** type_info = &type_info_ref;
        inline app::UnityWebRequestAsyncOperation__Class* get_class() {
            return il2cpp::get_class<app::UnityWebRequestAsyncOperation__Class>(type_info, "UnityEngine.Networking", "UnityWebRequestAsyncOperation");
        }
        inline app::UnityWebRequestAsyncOperation* create() {
            return il2cpp::create_object<app::UnityWebRequestAsyncOperation>(get_class());
        }
    } // namespace UnityWebRequestAsyncOperation
} // namespace app::classes::types
