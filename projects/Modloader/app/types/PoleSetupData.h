#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/PoleSetupData__Class.h>
#include <Modloader/app/structs/PoleSetupData.h>
#include <Modloader/app/structs/PoleSetupData__Array.h>

namespace app::classes::types {
    namespace PoleSetupData {
        namespace {
            inline app::PoleSetupData__Class* type_info_ref = nullptr;
        }
        inline app::PoleSetupData__Class** type_info = &type_info_ref;
        inline app::PoleSetupData__Class* get_class() {
            return il2cpp::get_class<app::PoleSetupData__Class>(type_info, "Game", "PoleSetupData");
        }
        inline app::PoleSetupData* create() {
            return il2cpp::create_object<app::PoleSetupData>(get_class());
        }
        inline app::PoleSetupData__Array* create_array(int size) {
            return il2cpp::array_new<app::PoleSetupData__Array>(get_class(), size);
        }
        inline app::PoleSetupData__Array* create_array(const std::vector<app::PoleSetupData*>& items) {
            return il2cpp::array_new<app::PoleSetupData__Array>(get_class(), items);
        }
    } // namespace PoleSetupData
} // namespace app::classes::types
