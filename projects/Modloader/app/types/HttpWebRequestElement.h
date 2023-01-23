#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/HttpWebRequestElement__Class.h>
#include <Modloader/app/structs/HttpWebRequestElement.h>

namespace app::classes::types {
    namespace HttpWebRequestElement {
        namespace {
            inline app::HttpWebRequestElement__Class* type_info_ref = nullptr;
        }
        inline app::HttpWebRequestElement__Class** type_info = &type_info_ref;
        inline app::HttpWebRequestElement__Class* get_class() {
            return il2cpp::get_class<app::HttpWebRequestElement__Class>(type_info, "System.Net.Configuration", "HttpWebRequestElement");
        }
        inline app::HttpWebRequestElement* create() {
            return il2cpp::create_object<app::HttpWebRequestElement>(get_class());
        }
    } // namespace HttpWebRequestElement
} // namespace app::classes::types
