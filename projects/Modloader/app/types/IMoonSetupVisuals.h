#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace IMoonSetupVisuals {
        namespace {
            inline app::IMoonSetupVisuals__Class* type_info_ref = nullptr;
        }
        inline app::IMoonSetupVisuals__Class** type_info = &type_info_ref;
        inline app::IMoonSetupVisuals__Class* get_class() {
            return il2cpp::get_class<app::IMoonSetupVisuals__Class>(type_info, "", "IMoonSetupVisuals");
        }
    } // namespace IMoonSetupVisuals
} // namespace app::classes::types
