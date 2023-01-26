#pragma once
#include <Modloader/app/structs/HttpWebRequestElement.h>
#include <Modloader/app/structs/HttpWebRequestElement__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace HttpWebRequestElement {
        inline app::HttpWebRequestElement__Class** type_info() {
            static app::HttpWebRequestElement__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::HttpWebRequestElement__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::HttpWebRequestElement__Class* get_class() {
            return il2cpp::get_class<app::HttpWebRequestElement__Class>(type_info(), "System.Net.Configuration", "HttpWebRequestElement");
        }
        inline app::HttpWebRequestElement* create() {
            return il2cpp::create_object<app::HttpWebRequestElement>(get_class());
        }
    } // namespace HttpWebRequestElement
} // namespace app::classes::types
