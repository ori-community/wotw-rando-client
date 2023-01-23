#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/EVRHMDType__Enum__Class.h>
#include <Modloader/app/structs/EVRHMDType__Enum.h>

namespace app::classes::types {
    namespace EVRHMDType__Enum {
        namespace {
            inline app::EVRHMDType__Enum__Class* type_info_ref = nullptr;
        }
        inline app::EVRHMDType__Enum__Class** type_info = &type_info_ref;
        inline app::EVRHMDType__Enum__Class* get_class() {
            return il2cpp::get_class<app::EVRHMDType__Enum__Class>(type_info, "Steamworks", "EVRHMDType");
        }
        inline app::EVRHMDType__Enum* create() {
            return il2cpp::create_object<app::EVRHMDType__Enum>(get_class());
        }
    } // namespace EVRHMDType__Enum
} // namespace app::classes::types
