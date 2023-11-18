#pragma once
#include <Modloader/app/structs/RequestCacheValidator.h>
#include <Modloader/app/structs/RequestCacheValidator__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace RequestCacheValidator {
        inline app::RequestCacheValidator__Class** type_info() {
            static app::RequestCacheValidator__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::RequestCacheValidator__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::RequestCacheValidator__Class* get_class() {
            return il2cpp::get_class<app::RequestCacheValidator__Class>(type_info(), "System.Net.Cache", "RequestCacheValidator");
        }
        inline app::RequestCacheValidator* create() {
            return il2cpp::create_object<app::RequestCacheValidator>(get_class());
        }
    } // namespace RequestCacheValidator
} // namespace app::classes::types
