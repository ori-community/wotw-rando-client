#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace RequestCacheValidator {
        namespace {
            app::RequestCacheValidator__Class* type_info_ref = nullptr;
        }
        app::RequestCacheValidator__Class** type_info = &type_info_ref;
        inline app::RequestCacheValidator__Class* get_class() {
            return il2cpp::get_class<app::RequestCacheValidator__Class>(type_info, "System.Net.Cache", "RequestCacheValidator");
        }
        inline app::RequestCacheValidator* create() {
            return il2cpp::create_object<app::RequestCacheValidator>(get_class());
        }
    } // namespace RequestCacheValidator
} // namespace app::classes::types
