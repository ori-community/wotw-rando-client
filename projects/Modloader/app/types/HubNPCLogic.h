#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/HubNPCLogic__Class.h>
#include <Modloader/app/structs/HubNPCLogic.h>

namespace app::classes::types {
    namespace HubNPCLogic {
        namespace {
            inline app::HubNPCLogic__Class* type_info_ref = nullptr;
        }
        inline app::HubNPCLogic__Class** type_info = &type_info_ref;
        inline app::HubNPCLogic__Class* get_class() {
            return il2cpp::get_class<app::HubNPCLogic__Class>(type_info, "", "HubNPCLogic");
        }
        inline app::HubNPCLogic* create() {
            return il2cpp::create_object<app::HubNPCLogic>(get_class());
        }
    } // namespace HubNPCLogic
} // namespace app::classes::types
