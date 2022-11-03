#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace UtilityDecorator {
        namespace {
            inline app::UtilityDecorator__Class* type_info_ref = nullptr;
        }
        inline app::UtilityDecorator__Class** type_info = &type_info_ref;
        inline app::UtilityDecorator__Class* get_class() {
            return il2cpp::get_class<app::UtilityDecorator__Class>(type_info, "Moon.BehaviourSystem", "UtilityDecorator");
        }
        inline app::UtilityDecorator* create() {
            return il2cpp::create_object<app::UtilityDecorator>(get_class());
        }
    } // namespace UtilityDecorator
} // namespace app::classes::types
