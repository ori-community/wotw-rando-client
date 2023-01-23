#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/SeinOnGroundCondition__Class.h>
#include <Modloader/app/structs/SeinOnGroundCondition.h>

namespace app::classes::types {
    namespace SeinOnGroundCondition {
        namespace {
            inline app::SeinOnGroundCondition__Class* type_info_ref = nullptr;
        }
        inline app::SeinOnGroundCondition__Class** type_info = &type_info_ref;
        inline app::SeinOnGroundCondition__Class* get_class() {
            return il2cpp::get_class<app::SeinOnGroundCondition__Class>(type_info, "", "SeinOnGroundCondition");
        }
        inline app::SeinOnGroundCondition* create() {
            return il2cpp::create_object<app::SeinOnGroundCondition>(get_class());
        }
    } // namespace SeinOnGroundCondition
} // namespace app::classes::types
