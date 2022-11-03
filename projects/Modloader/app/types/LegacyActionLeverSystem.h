#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace LegacyActionLeverSystem {
        namespace {
            inline app::LegacyActionLeverSystem__Class* type_info_ref = nullptr;
        }
        inline app::LegacyActionLeverSystem__Class** type_info = &type_info_ref;
        inline app::LegacyActionLeverSystem__Class* get_class() {
            return il2cpp::get_class<app::LegacyActionLeverSystem__Class>(type_info, "", "LegacyActionLeverSystem");
        }
        inline app::LegacyActionLeverSystem* create() {
            return il2cpp::create_object<app::LegacyActionLeverSystem>(get_class());
        }
    } // namespace LegacyActionLeverSystem
} // namespace app::classes::types
