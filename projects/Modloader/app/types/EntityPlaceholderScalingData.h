#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/EntityPlaceholderScalingData__Class.h>
#include <Modloader/app/structs/EntityPlaceholderScalingData.h>
#include <Modloader/app/structs/EntityPlaceholderScalingData__Array.h>

namespace app::classes::types {
    namespace EntityPlaceholderScalingData {
        namespace {
            inline app::EntityPlaceholderScalingData__Class* type_info_ref = nullptr;
        }
        inline app::EntityPlaceholderScalingData__Class** type_info = &type_info_ref;
        inline app::EntityPlaceholderScalingData__Class* get_class() {
            return il2cpp::get_class<app::EntityPlaceholderScalingData__Class>(type_info, "", "EntityPlaceholderScalingData");
        }
        inline app::EntityPlaceholderScalingData* create() {
            return il2cpp::create_object<app::EntityPlaceholderScalingData>(get_class());
        }
        inline app::EntityPlaceholderScalingData__Array* create_array(int size) {
            return il2cpp::array_new<app::EntityPlaceholderScalingData__Array>(get_class(), size);
        }
        inline app::EntityPlaceholderScalingData__Array* create_array(const std::vector<app::EntityPlaceholderScalingData*>& items) {
            return il2cpp::array_new<app::EntityPlaceholderScalingData__Array>(get_class(), items);
        }
    } // namespace EntityPlaceholderScalingData
} // namespace app::classes::types
