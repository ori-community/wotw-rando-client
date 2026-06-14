#pragma once
#include <Modloader/app/structs/ServicePointManager_SPKey.h>
#include <Modloader/app/structs/ServicePointManager_SPKey__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ServicePointManager_SPKey {
        inline app::ServicePointManager_SPKey__Class** type_info() {
            static app::ServicePointManager_SPKey__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::ServicePointManager_SPKey__Class**)(modloader::win::memory::resolve_rva(0x04795718));
            }
            return cache;
        }
        inline app::ServicePointManager_SPKey__Class* get_class() {
            return il2cpp::get_nested_class<app::ServicePointManager_SPKey__Class>(type_info(), "System.Net", "ServicePointManager", "SPKey");
        }
        inline app::ServicePointManager_SPKey* create() {
            return il2cpp::create_object<app::ServicePointManager_SPKey>(get_class());
        }
    } // namespace ServicePointManager_SPKey
} // namespace app::classes::types
