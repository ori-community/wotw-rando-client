#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/SeinRunToTargetAction_Perform_d_14__Class.h>
#include <Modloader/app/structs/SeinRunToTargetAction_Perform_d_14.h>

namespace app::classes::types {
    namespace SeinRunToTargetAction_Perform_d_14 {
        inline app::SeinRunToTargetAction_Perform_d_14__Class** type_info = (app::SeinRunToTargetAction_Perform_d_14__Class**)(modloader::win::memory::resolve_rva(0x04765900));
        inline app::SeinRunToTargetAction_Perform_d_14__Class* get_class() {
            return il2cpp::get_nested_class<app::SeinRunToTargetAction_Perform_d_14__Class>(type_info, "", "SeinRunToTargetAction", "<Perform>d__14");
        }
        inline app::SeinRunToTargetAction_Perform_d_14* create() {
            return il2cpp::create_object<app::SeinRunToTargetAction_Perform_d_14>(get_class());
        }
    } // namespace SeinRunToTargetAction_Perform_d_14
} // namespace app::classes::types
