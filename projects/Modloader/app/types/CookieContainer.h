#pragma once
#include <Modloader/app/structs/CookieContainer.h>
#include <Modloader/app/structs/CookieContainer__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace CookieContainer {
        inline app::CookieContainer__Class** type_info() {
            static app::CookieContainer__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::CookieContainer__Class**)(modloader::win::memory::resolve_rva(0x04722A70));
            }
            return cache;
        }
        inline app::CookieContainer__Class* get_class() {
            return il2cpp::get_class<app::CookieContainer__Class>(type_info(), "System.Net", "CookieContainer");
        }
        inline app::CookieContainer* create() {
            return il2cpp::create_object<app::CookieContainer>(get_class());
        }
    } // namespace CookieContainer
} // namespace app::classes::types
