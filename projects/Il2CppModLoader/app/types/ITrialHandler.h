#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace ITrialHandler {
        extern IL2CPP_MODLOADER_DLLEXPORT app::ITrialHandler__Class** type_info;
        inline app::ITrialHandler__Class* get_class() {
            return il2cpp::get_class<app::ITrialHandler__Class>(type_info, "Moon.Race", "ITrialHandler");
        }
        inline app::ITrialHandler* create() {
            return il2cpp::create_object<app::ITrialHandler>(get_class());
        }
    } // namespace ITrialHandler
} // namespace app::classes::types
