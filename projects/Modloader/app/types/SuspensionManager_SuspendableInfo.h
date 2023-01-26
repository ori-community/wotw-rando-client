#pragma once
#include <Modloader/app/structs/SuspensionManager_SuspendableInfo.h>
#include <Modloader/app/structs/SuspensionManager_SuspendableInfo__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace SuspensionManager_SuspendableInfo {
        inline app::SuspensionManager_SuspendableInfo__Class** type_info() {
            static app::SuspensionManager_SuspendableInfo__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::SuspensionManager_SuspendableInfo__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::SuspensionManager_SuspendableInfo__Class* get_class() {
            return il2cpp::get_nested_class<app::SuspensionManager_SuspendableInfo__Class>(type_info(), "Moon", "SuspensionManager", "SuspendableInfo");
        }
        inline app::SuspensionManager_SuspendableInfo* create() {
            return il2cpp::create_object<app::SuspensionManager_SuspendableInfo>(get_class());
        }
    } // namespace SuspensionManager_SuspendableInfo
} // namespace app::classes::types
