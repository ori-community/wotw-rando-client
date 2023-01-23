#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/XRequirements__Class.h>
#include <Modloader/app/structs/XRequirements.h>
#include <Modloader/app/structs/XRequirements__Array.h>

namespace app::classes::types {
    namespace XRequirements {
        namespace {
            inline app::XRequirements__Class* type_info_ref = nullptr;
        }
        inline app::XRequirements__Class** type_info = &type_info_ref;
        inline app::XRequirements__Class* get_class() {
            return il2cpp::get_class<app::XRequirements__Class>(type_info, "SystemIntegration.Synchronizer.Achievements", "XRequirements");
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
