#pragma once
#include <Modloader/app/structs/LoadingBoostController_BoostModeLevel__Enum.h>
#include <Modloader/app/structs/LoadingBoostController_BoostModeLevel__Enum__Array.h>
#include <Modloader/app/structs/LoadingBoostController_BoostModeLevel__Enum__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace LoadingBoostController_BoostModeLevel__Enum {
        inline app::LoadingBoostController_BoostModeLevel__Enum__Class** type_info() {
            static app::LoadingBoostController_BoostModeLevel__Enum__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::LoadingBoostController_BoostModeLevel__Enum__Class**)(modloader::win::memory::resolve_rva(0x04730350));
            }
            return cache;
        }
        inline app::LoadingBoostController_BoostModeLevel__Enum__Class* get_class() {
            return il2cpp::get_nested_class<app::LoadingBoostController_BoostModeLevel__Enum__Class>(type_info(), "", "LoadingBoostController", "BoostModeLevel");
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
