#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/UpgradableMultiplier__Class.h>
#include <Modloader/app/structs/UpgradableMultiplier.h>

namespace app::classes::types {
    namespace UpgradableMultiplier {
        namespace {
            inline app::UpgradableMultiplier__Class* type_info_ref = nullptr;
        }
        inline app::UpgradableMultiplier__Class** type_info = &type_info_ref;
        inline app::UpgradableMultiplier__Class* get_class() {
            return il2cpp::get_class<app::UpgradableMultiplier__Class>(type_info, "", "UpgradableMultiplier");
        }
        inline app::UpgradableMultiplier* create() {
            return il2cpp::create_object<app::UpgradableMultiplier>(get_class());
        }
    } // namespace UpgradableMultiplier
} // namespace app::classes::types
