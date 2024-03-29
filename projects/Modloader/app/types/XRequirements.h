#pragma once
#include <Modloader/app/structs/XRequirements.h>
#include <Modloader/app/structs/XRequirements__Array.h>
#include <Modloader/app/structs/XRequirements__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace XRequirements {
        inline app::XRequirements__Class** type_info() {
            static app::XRequirements__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::XRequirements__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::XRequirements__Class* get_class() {
            return il2cpp::get_class<app::XRequirements__Class>(type_info(), "SystemIntegration.Synchronizer.Achievements", "XRequirements");
        }
        inline app::XRequirements* create() {
            return il2cpp::create_object<app::XRequirements>(get_class());
        }
        inline app::XRequirements__Array* create_array(int size) {
            return il2cpp::array_new<app::XRequirements__Array>(get_class(), size);
        }
        inline app::XRequirements__Array* create_array(const std::vector<app::XRequirements*>& items) {
            return il2cpp::array_new<app::XRequirements__Array>(get_class(), items);
        }
    } // namespace XRequirements
} // namespace app::classes::types
