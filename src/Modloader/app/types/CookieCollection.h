#pragma once
#include <Modloader/app/structs/CookieCollection.h>
#include <Modloader/app/structs/CookieCollection__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace CookieCollection {
        inline app::CookieCollection__Class** type_info() {
            static app::CookieCollection__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::CookieCollection__Class**)(modloader::win::memory::resolve_rva(0x047923A8));
            }
            return cache;
        }
        inline app::CookieCollection__Class* get_class() {
            return il2cpp::get_class<app::CookieCollection__Class>(type_info(), "System.Net", "CookieCollection");
        }
        inline app::CookieCollection* create() {
            return il2cpp::create_object<app::CookieCollection>(get_class());
        }
    } // namespace CookieCollection
} // namespace app::classes::types
