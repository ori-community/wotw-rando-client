#pragma once
#include <Modloader/app/structs/UnityWebRequestAsyncOperation.h>
#include <Modloader/app/structs/UnityWebRequestAsyncOperation__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace UnityWebRequestAsyncOperation {
        inline app::UnityWebRequestAsyncOperation__Class** type_info() {
            static app::UnityWebRequestAsyncOperation__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::UnityWebRequestAsyncOperation__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::UnityWebRequestAsyncOperation__Class* get_class() {
            return il2cpp::get_class<app::UnityWebRequestAsyncOperation__Class>(type_info(), "UnityEngine.Networking", "UnityWebRequestAsyncOperation");
        }
        inline app::UnityWebRequestAsyncOperation* create() {
            return il2cpp::create_object<app::UnityWebRequestAsyncOperation>(get_class());
        }
    } // namespace UnityWebRequestAsyncOperation
} // namespace app::classes::types
