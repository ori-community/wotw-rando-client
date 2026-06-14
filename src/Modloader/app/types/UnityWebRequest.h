#pragma once
#include <Modloader/app/structs/UnityWebRequest.h>
#include <Modloader/app/structs/UnityWebRequest__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace UnityWebRequest {
        inline app::UnityWebRequest__Class** type_info() {
            static app::UnityWebRequest__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::UnityWebRequest__Class**)(modloader::win::memory::resolve_rva(0x04716A88));
            }
            return cache;
        }
        inline app::UnityWebRequest__Class* get_class() {
            return il2cpp::get_class<app::UnityWebRequest__Class>(type_info(), "UnityEngine.Networking", "UnityWebRequest");
        }
        inline app::UnityWebRequest* create() {
            return il2cpp::create_object<app::UnityWebRequest>(get_class());
        }
    } // namespace UnityWebRequest
} // namespace app::classes::types
