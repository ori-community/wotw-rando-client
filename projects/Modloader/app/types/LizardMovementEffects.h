#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/LizardMovementEffects__Class.h>
#include <Modloader/app/structs/LizardMovementEffects.h>

namespace app::classes::types {
    namespace LizardMovementEffects {
        inline app::LizardMovementEffects__Class** type_info = (app::LizardMovementEffects__Class**)(modloader::win::memory::resolve_rva(0x0470B540));
        inline app::LizardMovementEffects__Class* get_class() {
            return il2cpp::get_class<app::LizardMovementEffects__Class>(type_info, "", "LizardMovementEffects");
        }
        inline app::LizardMovementEffects* create() {
            return il2cpp::create_object<app::LizardMovementEffects>(get_class());
        }
    } // namespace LizardMovementEffects
} // namespace app::classes::types
