#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/WebRequestModulesSection__Class.h>
#include <Modloader/app/structs/WebRequestModulesSection.h>

namespace app::classes::types {
    namespace WebRequestModulesSection {
        namespace {
            inline app::WebRequestModulesSection__Class* type_info_ref = nullptr;
        }
        inline app::WebRequestModulesSection__Class** type_info = &type_info_ref;
        inline app::WebRequestModulesSection__Class* get_class() {
            return il2cpp::get_class<app::WebRequestModulesSection__Class>(type_info, "System.Net.Configuration", "WebRequestModulesSection");
        }
        inline app::WebRequestModulesSection* create() {
            return il2cpp::create_object<app::WebRequestModulesSection>(get_class());
        }
    } // namespace WebRequestModulesSection
} // namespace app::classes::types
