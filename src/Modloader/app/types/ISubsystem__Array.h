#pragma once
#include <Modloader/app/structs/ISubsystem__Array.h>
#include <Modloader/app/structs/ISubsystem__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ISubsystem__Array {
        inline app::ISubsystem__Array__Class** type_info() {
            static app::ISubsystem__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::ISubsystem__Array__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::ISubsystem__Array__Class* get_class() {
            return il2cpp::get_class<app::ISubsystem__Array__Class>(type_info(), "UnityEngine.Experimental", "ISubsystem[]");
        }
        inline app::ISubsystem__Array* create() {
            return il2cpp::create_object<app::ISubsystem__Array>(get_class());
        }
    } // namespace ISubsystem__Array
} // namespace app::classes::types
