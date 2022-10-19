#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace ServicePointManagerElement {
        namespace {
            inline app::ServicePointManagerElement__Class* type_info_ref = nullptr;
        }
        inline app::ServicePointManagerElement__Class** type_info = &type_info_ref;
        inline app::ServicePointManagerElement__Class* get_class() {
            return il2cpp::get_class<app::ServicePointManagerElement__Class>(type_info, "System.Net.Configuration", "ServicePointManagerElement");
        }
        inline app::ServicePointManagerElement* create() {
            return il2cpp::create_object<app::ServicePointManagerElement>(get_class());
        }
    } // namespace ServicePointManagerElement
} // namespace app::classes::types
