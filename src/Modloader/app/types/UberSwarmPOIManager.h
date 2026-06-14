#pragma once
#include <Modloader/app/structs/UberSwarmPOIManager.h>
#include <Modloader/app/structs/UberSwarmPOIManager__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace UberSwarmPOIManager {
        inline app::UberSwarmPOIManager__Class** type_info() {
            static app::UberSwarmPOIManager__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::UberSwarmPOIManager__Class**)(modloader::win::memory::resolve_rva(0x047748D0));
            }
            return cache;
        }
        inline app::UberSwarmPOIManager__Class* get_class() {
            return il2cpp::get_class<app::UberSwarmPOIManager__Class>(type_info(), "", "UberSwarmPOIManager");
        }
        inline app::UberSwarmPOIManager* create() {
            return il2cpp::create_object<app::UberSwarmPOIManager>(get_class());
        }
    } // namespace UberSwarmPOIManager
} // namespace app::classes::types
