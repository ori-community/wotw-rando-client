#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace UberInteractionManagerAccelerator {
        extern IL2CPP_MODLOADER_DLLEXPORT app::UberInteractionManagerAccelerator__Class** type_info;
        inline app::UberInteractionManagerAccelerator__Class* get_class() {
            return il2cpp::get_class<app::UberInteractionManagerAccelerator__Class>(type_info, "", "UberInteractionManagerAccelerator");
        }
        inline app::UberInteractionManagerAccelerator* create() {
            return il2cpp::create_object<app::UberInteractionManagerAccelerator>(get_class());
        }
    } // namespace UberInteractionManagerAccelerator
} // namespace app::classes::types
