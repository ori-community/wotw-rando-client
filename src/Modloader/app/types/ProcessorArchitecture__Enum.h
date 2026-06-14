#pragma once
#include <Modloader/app/structs/ProcessorArchitecture__Enum.h>
#include <Modloader/app/structs/ProcessorArchitecture__Enum__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ProcessorArchitecture__Enum {
        inline app::ProcessorArchitecture__Enum__Class** type_info() {
            static app::ProcessorArchitecture__Enum__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::ProcessorArchitecture__Enum__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::ProcessorArchitecture__Enum__Class* get_class() {
            return il2cpp::get_class<app::ProcessorArchitecture__Enum__Class>(type_info(), "System.Reflection", "ProcessorArchitecture");
        }
        inline app::ProcessorArchitecture__Enum* create() {
            return il2cpp::create_object<app::ProcessorArchitecture__Enum>(get_class());
        }
    } // namespace ProcessorArchitecture__Enum
} // namespace app::classes::types
