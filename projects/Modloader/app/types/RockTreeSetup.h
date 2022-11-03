#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace RockTreeSetup {
        namespace {
            inline app::RockTreeSetup__Class* type_info_ref = nullptr;
        }
        inline app::RockTreeSetup__Class** type_info = &type_info_ref;
        inline app::RockTreeSetup__Class* get_class() {
            return il2cpp::get_class<app::RockTreeSetup__Class>(type_info, "", "RockTreeSetup");
        }
        inline app::RockTreeSetup* create() {
            return il2cpp::create_object<app::RockTreeSetup>(get_class());
        }
    } // namespace RockTreeSetup
} // namespace app::classes::types
