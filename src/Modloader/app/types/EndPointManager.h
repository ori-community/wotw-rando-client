#pragma once
#include <Modloader/app/structs/EndPointManager.h>
#include <Modloader/app/structs/EndPointManager__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace EndPointManager {
        inline app::EndPointManager__Class** type_info() {
            static app::EndPointManager__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::EndPointManager__Class**)(modloader::win::memory::resolve_rva(0x04734190));
            }
            return cache;
        }
        inline app::EndPointManager__Class* get_class() {
            return il2cpp::get_class<app::EndPointManager__Class>(type_info(), "System.Net", "EndPointManager");
        }
        inline app::EndPointManager* create() {
            return il2cpp::create_object<app::EndPointManager>(get_class());
        }
    } // namespace EndPointManager
} // namespace app::classes::types
