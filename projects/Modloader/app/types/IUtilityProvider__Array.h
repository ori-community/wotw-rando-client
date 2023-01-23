#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/IUtilityProvider__Array__Class.h>
#include <Modloader/app/structs/IUtilityProvider__Array.h>

namespace app::classes::types {
    namespace IUtilityProvider__Array {
        namespace {
            inline app::IUtilityProvider__Array__Class* type_info_ref = nullptr;
        }
        inline app::IUtilityProvider__Array__Class** type_info = &type_info_ref;
        inline app::IUtilityProvider__Array__Class* get_class() {
            return il2cpp::get_class<app::IUtilityProvider__Array__Class>(type_info, "Moon.BehaviourSystem", "IUtilityProvider[]");
        }
        inline app::IUtilityProvider__Array* create() {
            return il2cpp::create_object<app::IUtilityProvider__Array>(get_class());
        }
    } // namespace IUtilityProvider__Array
} // namespace app::classes::types
