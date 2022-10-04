#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace ISubsystem {
        namespace {
            app::ISubsystem__Class* type_info_ref = nullptr;
        }
        app::ISubsystem__Class** type_info = &type_info_ref;
        inline app::ISubsystem__Class* get_class() {
            return il2cpp::get_class<app::ISubsystem__Class>(type_info, "UnityEngine.Experimental", "ISubsystem");
        }
        inline app::ISubsystem* create() {
            return il2cpp::create_object<app::ISubsystem>(get_class());
        }
        inline app::ISubsystem__Array* create_array(int size) {
            return il2cpp::array_new<app::ISubsystem__Array>(get_class(), size);
        }
    } // namespace ISubsystem
} // namespace app::classes::types
