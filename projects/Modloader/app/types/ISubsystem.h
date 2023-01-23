#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/ISubsystem__Class.h>
#include <Modloader/app/structs/ISubsystem__Array.h>
#include <Modloader/app/structs/ISubsystem.h>

namespace app::classes::types {
    namespace ISubsystem {
        namespace {
            inline app::ISubsystem__Class* type_info_ref = nullptr;
        }
        inline app::ISubsystem__Class** type_info = &type_info_ref;
        inline app::ISubsystem__Class* get_class() {
            return il2cpp::get_class<app::ISubsystem__Class>(type_info, "UnityEngine.Experimental", "ISubsystem");
        }
        inline app::ISubsystem__Array* create_array(int size) {
            return il2cpp::array_new<app::ISubsystem__Array>(get_class(), size);
        }
        inline app::ISubsystem__Array* create_array(const std::vector<app::ISubsystem*>& items) {
            return il2cpp::array_new<app::ISubsystem__Array>(get_class(), items);
        }
    } // namespace ISubsystem
} // namespace app::classes::types
