#pragma once
#include <Modloader/app/structs/XRequirements__Array.h>
#include <Modloader/app/structs/XRequirements__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace XRequirements__Array {
        inline app::XRequirements__Array__Class** type_info() {
            static app::XRequirements__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::XRequirements__Array__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::XRequirements__Array__Class* get_class() {
            return il2cpp::get_class<app::XRequirements__Array__Class>(type_info(), "SystemIntegration.Synchronizer.Achievements", "XRequirements[]");
        }
        inline app::XRequirements__Array* create() {
            return il2cpp::create_object<app::XRequirements__Array>(get_class());
        }
    } // namespace XRequirements__Array
} // namespace app::classes::types
