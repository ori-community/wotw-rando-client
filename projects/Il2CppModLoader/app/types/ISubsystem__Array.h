#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace ISubsystem__Array {
        namespace {
            inline app::ISubsystem__Array__Class* type_info_ref = nullptr;
        }
        inline app::ISubsystem__Array__Class** type_info = &type_info_ref;
        inline app::ISubsystem__Array__Class* get_class() {
            return il2cpp::get_class<app::ISubsystem__Array__Class>(type_info, "UnityEngine.Experimental", "ISubsystem[]");
        }
        inline app::ISubsystem__Array* create() {
            return il2cpp::create_object<app::ISubsystem__Array>(get_class());
        }
    } // namespace ISubsystem__Array
} // namespace app::classes::types
