#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/IMoonSetupLogic__Class.h>

namespace app::classes::types {
    namespace IMoonSetupLogic {
        namespace {
            inline app::IMoonSetupLogic__Class* type_info_ref = nullptr;
        }
        inline app::IMoonSetupLogic__Class** type_info = &type_info_ref;
        inline app::IMoonSetupLogic__Class* get_class() {
            return il2cpp::get_class<app::IMoonSetupLogic__Class>(type_info, "", "IMoonSetupLogic");
        }
    } // namespace IMoonSetupLogic
} // namespace app::classes::types
