#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace CacheControlHeaderValue {
        inline app::CacheControlHeaderValue__Class** type_info = (app::CacheControlHeaderValue__Class**)(modloader::win::memory::resolve_rva(0x047489B8));
        inline app::CacheControlHeaderValue__Class* get_class() {
            return il2cpp::get_class<app::CacheControlHeaderValue__Class>(type_info, "System.Net.Http.Headers", "CacheControlHeaderValue");
        }
        inline app::CacheControlHeaderValue* create() {
            return il2cpp::create_object<app::CacheControlHeaderValue>(get_class());
        }
    } // namespace CacheControlHeaderValue
} // namespace app::classes::types
