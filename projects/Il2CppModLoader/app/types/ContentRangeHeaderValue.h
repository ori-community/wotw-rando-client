#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace ContentRangeHeaderValue {
        inline app::ContentRangeHeaderValue__Class** type_info = (app::ContentRangeHeaderValue__Class**)(modloader::win::memory::resolve_rva(0x047475F8));
        inline app::ContentRangeHeaderValue__Class* get_class() {
            return il2cpp::get_class<app::ContentRangeHeaderValue__Class>(type_info, "System.Net.Http.Headers", "ContentRangeHeaderValue");
        }
        inline app::ContentRangeHeaderValue* create() {
            return il2cpp::create_object<app::ContentRangeHeaderValue>(get_class());
        }
    } // namespace ContentRangeHeaderValue
} // namespace app::classes::types
