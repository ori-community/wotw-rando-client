#pragma once
#include <Modloader/app/structs/ResourceRequest.h>
#include <Modloader/app/structs/ResourceRequest__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ResourceRequest {
        inline app::ResourceRequest__Class** type_info() {
            static app::ResourceRequest__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::ResourceRequest__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::ResourceRequest__Class* get_class() {
            return il2cpp::get_class<app::ResourceRequest__Class>(type_info(), "UnityEngine", "ResourceRequest");
        }
        inline app::ResourceRequest* create() {
            return il2cpp::create_object<app::ResourceRequest>(get_class());
        }
    } // namespace ResourceRequest
} // namespace app::classes::types
