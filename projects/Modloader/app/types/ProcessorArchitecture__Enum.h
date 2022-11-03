#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace ProcessorArchitecture__Enum {
        namespace {
            inline app::ProcessorArchitecture__Enum__Class* type_info_ref = nullptr;
        }
        inline app::ProcessorArchitecture__Enum__Class** type_info = &type_info_ref;
        inline app::ProcessorArchitecture__Enum__Class* get_class() {
            return il2cpp::get_class<app::ProcessorArchitecture__Enum__Class>(type_info, "System.Reflection", "ProcessorArchitecture");
        }
        inline app::ProcessorArchitecture__Enum* create() {
            return il2cpp::create_object<app::ProcessorArchitecture__Enum>(get_class());
        }
    } // namespace ProcessorArchitecture__Enum
} // namespace app::classes::types
