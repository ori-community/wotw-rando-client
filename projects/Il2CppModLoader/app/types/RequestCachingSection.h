#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace RequestCachingSection {
        namespace {
            app::RequestCachingSection__Class* type_info_ref = nullptr;
        }
        app::RequestCachingSection__Class** type_info = &type_info_ref;
        inline app::RequestCachingSection__Class* get_class() {
            return il2cpp::get_class<app::RequestCachingSection__Class>(type_info, "System.Net.Configuration", "RequestCachingSection");
        }
        inline app::RequestCachingSection* create() {
            return il2cpp::create_object<app::RequestCachingSection>(get_class());
        }
    } // namespace RequestCachingSection
} // namespace app::classes::types
