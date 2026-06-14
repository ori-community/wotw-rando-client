#pragma once
#include <Modloader/app/structs/HubNPCLogic.h>
#include <Modloader/app/structs/HubNPCLogic__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace HubNPCLogic {
        inline app::HubNPCLogic__Class** type_info() {
            static app::HubNPCLogic__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::HubNPCLogic__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::HubNPCLogic__Class* get_class() {
            return il2cpp::get_class<app::HubNPCLogic__Class>(type_info(), "", "HubNPCLogic");
        }
        inline app::HubNPCLogic* create() {
            return il2cpp::create_object<app::HubNPCLogic>(get_class());
        }
    } // namespace HubNPCLogic
} // namespace app::classes::types
