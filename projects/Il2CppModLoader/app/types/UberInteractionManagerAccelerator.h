#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace UberInteractionManagerAccelerator {
        inline app::UberInteractionManagerAccelerator__Class** type_info = (app::UberInteractionManagerAccelerator__Class**)(modloader::win::memory::resolve_rva(0x047793B8));
        inline app::UberInteractionManagerAccelerator__Class* get_class() {
            return il2cpp::get_class<app::UberInteractionManagerAccelerator__Class>(type_info, "", "UberInteractionManagerAccelerator");
        }
        inline app::UberInteractionManagerAccelerator* create() {
            return il2cpp::create_object<app::UberInteractionManagerAccelerator>(get_class());
        }
    } // namespace UberInteractionManagerAccelerator
} // namespace app::classes::types
