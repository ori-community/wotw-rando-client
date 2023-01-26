#pragma once
#include <Modloader/app/structs/CacheControlHeaderValue.h>
#include <Modloader/app/structs/CacheControlHeaderValue__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace CacheControlHeaderValue {
        inline app::CacheControlHeaderValue__Class** type_info() {
            static app::CacheControlHeaderValue__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::CacheControlHeaderValue__Class**)(modloader::win::memory::resolve_rva(0x047489B8));
            }
            return cache;
        }
        inline app::CacheControlHeaderValue__Class* get_class() {
            return il2cpp::get_class<app::CacheControlHeaderValue__Class>(type_info(), "System.Net.Http.Headers", "CacheControlHeaderValue");
        }
        inline app::CacheControlHeaderValue* create() {
            return il2cpp::create_object<app::CacheControlHeaderValue>(get_class());
        }
    } // namespace CacheControlHeaderValue
} // namespace app::classes::types
