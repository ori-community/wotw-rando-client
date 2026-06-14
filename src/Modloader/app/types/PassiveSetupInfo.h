#pragma once
#include <Modloader/app/structs/PassiveSetupInfo.h>
#include <Modloader/app/structs/PassiveSetupInfo__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace PassiveSetupInfo {
        inline app::PassiveSetupInfo__Class** type_info() {
            static app::PassiveSetupInfo__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::PassiveSetupInfo__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::PassiveSetupInfo__Class* get_class() {
            return il2cpp::get_class<app::PassiveSetupInfo__Class>(type_info(), "", "PassiveSetupInfo");
        }
        inline app::PassiveSetupInfo* create() {
            return il2cpp::create_object<app::PassiveSetupInfo>(get_class());
        }
    } // namespace PassiveSetupInfo
} // namespace app::classes::types
