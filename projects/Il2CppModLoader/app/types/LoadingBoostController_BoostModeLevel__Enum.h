#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace LoadingBoostController_BoostModeLevel__Enum {
        inline app::LoadingBoostController_BoostModeLevel__Enum__Class** type_info = (app::LoadingBoostController_BoostModeLevel__Enum__Class**)(modloader::win::memory::resolve_rva(0x04730350));
        inline app::LoadingBoostController_BoostModeLevel__Enum__Class* get_class() {
            return il2cpp::get_nested_class<app::LoadingBoostController_BoostModeLevel__Enum__Class>(type_info, "", "LoadingBoostController", "BoostModeLevel");
        }
        inline app::LoadingBoostController_BoostModeLevel__Enum* create() {
            return il2cpp::create_object<app::LoadingBoostController_BoostModeLevel__Enum>(get_class());
        }
        inline app::LoadingBoostController_BoostModeLevel__Enum__Array* create_array(int size) {
            return il2cpp::array_new<app::LoadingBoostController_BoostModeLevel__Enum__Array>(get_class(), size);
        }
        inline app::LoadingBoostController_BoostModeLevel__Enum__Array* create_array(const std::vector<app::LoadingBoostController_BoostModeLevel__Enum*>& items) {
            return il2cpp::array_new<app::LoadingBoostController_BoostModeLevel__Enum__Array>(get_class(), items);
        }
    } // namespace LoadingBoostController_BoostModeLevel__Enum
} // namespace app::classes::types
