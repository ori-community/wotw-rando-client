#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/RequestCacheValidator__Class.h>
#include <Modloader/app/structs/RequestCacheValidator.h>

namespace app::classes::types {
    namespace RequestCacheValidator {
        namespace {
            inline app::RequestCacheValidator__Class* type_info_ref = nullptr;
        }
        inline app::RequestCacheValidator__Class** type_info = &type_info_ref;
        inline app::RequestCacheValidator__Class* get_class() {
            return il2cpp::get_class<app::RequestCacheValidator__Class>(type_info, "System.Net.Cache", "RequestCacheValidator");
        }
        inline app::RequestCacheValidator* create() {
            return il2cpp::create_object<app::RequestCacheValidator>(get_class());
        }
    } // namespace RequestCacheValidator
} // namespace app::classes::types
