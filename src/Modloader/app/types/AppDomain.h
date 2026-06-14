#pragma once
#include <Modloader/app/structs/AppDomain.h>
#include <Modloader/app/structs/AppDomain__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace AppDomain {
        inline app::AppDomain__Class** type_info() {
            static app::AppDomain__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::AppDomain__Class**)(modloader::win::memory::resolve_rva(0x047410D8));
            }
            return cache;
        }
        inline app::AppDomain__Class* get_class() {
            return il2cpp::get_class<app::AppDomain__Class>(type_info(), "System", "AppDomain");
        }
        inline app::AppDomain* create() {
            return il2cpp::create_object<app::AppDomain>(get_class());
        }
    } // namespace AppDomain
} // namespace app::classes::types
