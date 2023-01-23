#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/HttpCachePolicyElement__Class.h>
#include <Modloader/app/structs/HttpCachePolicyElement.h>

namespace app::classes::types {
    namespace HttpCachePolicyElement {
        namespace {
            inline app::HttpCachePolicyElement__Class* type_info_ref = nullptr;
        }
        inline app::HttpCachePolicyElement__Class** type_info = &type_info_ref;
        inline app::HttpCachePolicyElement__Class* get_class() {
            return il2cpp::get_class<app::HttpCachePolicyElement__Class>(type_info, "System.Net.Configuration", "HttpCachePolicyElement");
        }
        inline app::HttpCachePolicyElement* create() {
            return il2cpp::create_object<app::HttpCachePolicyElement>(get_class());
        }
    } // namespace HttpCachePolicyElement
} // namespace app::classes::types
