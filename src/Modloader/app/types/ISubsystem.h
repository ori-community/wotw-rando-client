#pragma once
#include <Modloader/app/structs/ISubsystem.h>
#include <Modloader/app/structs/ISubsystem__Array.h>
#include <Modloader/app/structs/ISubsystem__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ISubsystem {
        inline app::ISubsystem__Class** type_info() {
            static app::ISubsystem__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::ISubsystem__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::ISubsystem__Class* get_class() {
            return il2cpp::get_class<app::ISubsystem__Class>(type_info(), "UnityEngine.Experimental", "ISubsystem");
        }
        inline app::ISubsystem__Array* create_array(int size) {
            return il2cpp::array_new<app::ISubsystem__Array>(get_class(), size);
        }
        inline app::ISubsystem__Array* create_array(const std::vector<app::ISubsystem*>& items) {
            return il2cpp::array_new<app::ISubsystem__Array>(get_class(), items);
        }
    } // namespace ISubsystem
} // namespace app::classes::types
