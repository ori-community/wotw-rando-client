#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace HttpWebRequestElement {
        namespace {
            app::HttpWebRequestElement__Class* type_info_ref = nullptr;
        }
        app::HttpWebRequestElement__Class** type_info = &type_info_ref;
        inline app::HttpWebRequestElement__Class* get_class() {
            return il2cpp::get_class<app::HttpWebRequestElement__Class>(type_info, "System.Net.Configuration", "HttpWebRequestElement");
        }
        inline app::HttpWebRequestElement* create() {
            return il2cpp::create_object<app::HttpWebRequestElement>(get_class());
        }
    } // namespace HttpWebRequestElement
} // namespace app::classes::types
