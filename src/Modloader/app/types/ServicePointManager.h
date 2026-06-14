#pragma once
#include <Modloader/app/structs/ServicePointManager.h>
#include <Modloader/app/structs/ServicePointManager__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ServicePointManager {
        inline app::ServicePointManager__Class** type_info() {
            static app::ServicePointManager__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::ServicePointManager__Class**)(modloader::win::memory::resolve_rva(0x04752FC8));
            }
            return cache;
        }
        inline app::ServicePointManager__Class* get_class() {
            return il2cpp::get_class<app::ServicePointManager__Class>(type_info(), "System.Net", "ServicePointManager");
        }
        inline app::ServicePointManager* create() {
            return il2cpp::create_object<app::ServicePointManager>(get_class());
        }
    } // namespace ServicePointManager
} // namespace app::classes::types
