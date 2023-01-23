#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/ServicePointManager_SPKey__Class.h>
#include <Modloader/app/structs/ServicePointManager_SPKey.h>

namespace app::classes::types {
    namespace ServicePointManager_SPKey {
        inline app::ServicePointManager_SPKey__Class** type_info = (app::ServicePointManager_SPKey__Class**)(modloader::win::memory::resolve_rva(0x04795718));
        inline app::ServicePointManager_SPKey__Class* get_class() {
            return il2cpp::get_nested_class<app::ServicePointManager_SPKey__Class>(type_info, "System.Net", "ServicePointManager", "SPKey");
        }
        inline app::ServicePointManager_SPKey* create() {
            return il2cpp::create_object<app::ServicePointManager_SPKey>(get_class());
        }
    } // namespace ServicePointManager_SPKey
} // namespace app::classes::types
