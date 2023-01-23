#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/HttpListenerElement__Class.h>
#include <Modloader/app/structs/HttpListenerElement.h>

namespace app::classes::types {
    namespace HttpListenerElement {
        namespace {
            inline app::HttpListenerElement__Class* type_info_ref = nullptr;
        }
        inline app::HttpListenerElement__Class** type_info = &type_info_ref;
        inline app::HttpListenerElement__Class* get_class() {
            return il2cpp::get_class<app::HttpListenerElement__Class>(type_info, "System.Net.Configuration", "HttpListenerElement");
        }
        inline app::HttpListenerElement* create() {
            return il2cpp::create_object<app::HttpListenerElement>(get_class());
        }
    } // namespace HttpListenerElement
} // namespace app::classes::types
