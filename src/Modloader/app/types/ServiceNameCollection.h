#pragma once
#include <Modloader/app/structs/ServiceNameCollection.h>
#include <Modloader/app/structs/ServiceNameCollection__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ServiceNameCollection {
        inline app::ServiceNameCollection__Class** type_info() {
            static app::ServiceNameCollection__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::ServiceNameCollection__Class**)(modloader::win::memory::resolve_rva(0x0471C0C0));
            }
            return cache;
        }
        inline app::ServiceNameCollection__Class* get_class() {
            return il2cpp::get_class<app::ServiceNameCollection__Class>(type_info(), "System.Security.Authentication.ExtendedProtection", "ServiceNameCollection");
        }
        inline app::ServiceNameCollection* create() {
            return il2cpp::create_object<app::ServiceNameCollection>(get_class());
        }
    } // namespace ServiceNameCollection
} // namespace app::classes::types
