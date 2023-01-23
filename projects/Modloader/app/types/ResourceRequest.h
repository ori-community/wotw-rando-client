#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/ResourceRequest__Class.h>
#include <Modloader/app/structs/ResourceRequest.h>

namespace app::classes::types {
    namespace ResourceRequest {
        namespace {
            inline app::ResourceRequest__Class* type_info_ref = nullptr;
        }
        inline app::ResourceRequest__Class** type_info = &type_info_ref;
        inline app::ResourceRequest__Class* get_class() {
            return il2cpp::get_class<app::ResourceRequest__Class>(type_info, "UnityEngine", "ResourceRequest");
        }
        inline app::ResourceRequest* create() {
            return il2cpp::create_object<app::ResourceRequest>(get_class());
        }
    } // namespace ResourceRequest
} // namespace app::classes::types
