#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace PassiveSetupInfo {
        namespace {
            inline app::PassiveSetupInfo__Class* type_info_ref = nullptr;
        }
        inline app::PassiveSetupInfo__Class** type_info = &type_info_ref;
        inline app::PassiveSetupInfo__Class* get_class() {
            return il2cpp::get_class<app::PassiveSetupInfo__Class>(type_info, "", "PassiveSetupInfo");
        }
        inline app::PassiveSetupInfo* create() {
            return il2cpp::create_object<app::PassiveSetupInfo>(get_class());
        }
    } // namespace PassiveSetupInfo
} // namespace app::classes::types
