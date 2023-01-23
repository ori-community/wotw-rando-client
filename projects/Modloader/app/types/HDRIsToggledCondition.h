#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/HDRIsToggledCondition__Class.h>
#include <Modloader/app/structs/HDRIsToggledCondition.h>

namespace app::classes::types {
    namespace HDRIsToggledCondition {
        namespace {
            inline app::HDRIsToggledCondition__Class* type_info_ref = nullptr;
        }
        inline app::HDRIsToggledCondition__Class** type_info = &type_info_ref;
        inline app::HDRIsToggledCondition__Class* get_class() {
            return il2cpp::get_class<app::HDRIsToggledCondition__Class>(type_info, "", "HDRIsToggledCondition");
        }
        inline app::HDRIsToggledCondition* create() {
            return il2cpp::create_object<app::HDRIsToggledCondition>(get_class());
        }
    } // namespace HDRIsToggledCondition
} // namespace app::classes::types
