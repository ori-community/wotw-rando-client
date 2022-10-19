#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace ReplayValidatorData {
        inline app::ReplayValidatorData__Class** type_info = (app::ReplayValidatorData__Class**)(modloader::win::memory::resolve_rva(0x047690A8));
        inline app::ReplayValidatorData__Class* get_class() {
            return il2cpp::get_class<app::ReplayValidatorData__Class>(type_info, "Moon.Race", "ReplayValidatorData");
        }
        inline app::ReplayValidatorData* create() {
            return il2cpp::create_object<app::ReplayValidatorData>(get_class());
        }
    } // namespace ReplayValidatorData
} // namespace app::classes::types
