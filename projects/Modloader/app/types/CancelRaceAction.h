#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace CancelRaceAction {
        namespace {
            inline app::CancelRaceAction__Class* type_info_ref = nullptr;
        }
        inline app::CancelRaceAction__Class** type_info = &type_info_ref;
        inline app::CancelRaceAction__Class* get_class() {
            return il2cpp::get_class<app::CancelRaceAction__Class>(type_info, "", "CancelRaceAction");
        }
        inline app::CancelRaceAction* create() {
            return il2cpp::create_object<app::CancelRaceAction>(get_class());
        }
    } // namespace CancelRaceAction
} // namespace app::classes::types
