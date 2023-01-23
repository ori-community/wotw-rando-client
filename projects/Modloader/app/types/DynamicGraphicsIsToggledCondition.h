#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/DynamicGraphicsIsToggledCondition__Class.h>
#include <Modloader/app/structs/DynamicGraphicsIsToggledCondition.h>

namespace app::classes::types {
    namespace DynamicGraphicsIsToggledCondition {
        namespace {
            inline app::DynamicGraphicsIsToggledCondition__Class* type_info_ref = nullptr;
        }
        inline app::DynamicGraphicsIsToggledCondition__Class** type_info = &type_info_ref;
        inline app::DynamicGraphicsIsToggledCondition__Class* get_class() {
            return il2cpp::get_class<app::DynamicGraphicsIsToggledCondition__Class>(type_info, "", "DynamicGraphicsIsToggledCondition");
        }
        inline app::DynamicGraphicsIsToggledCondition* create() {
            return il2cpp::create_object<app::DynamicGraphicsIsToggledCondition>(get_class());
        }
    } // namespace DynamicGraphicsIsToggledCondition
} // namespace app::classes::types
