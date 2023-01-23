#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/EVRState__Enum__Class.h>
#include <Modloader/app/structs/EVRState__Enum.h>

namespace app::classes::types {
    namespace EVRState__Enum {
        namespace {
            inline app::EVRState__Enum__Class* type_info_ref = nullptr;
        }
        inline app::EVRState__Enum__Class** type_info = &type_info_ref;
        inline app::EVRState__Enum__Class* get_class() {
            return il2cpp::get_class<app::EVRState__Enum__Class>(type_info, "ZenFulcrum.VR.OpenVRBinding", "EVRState");
        }
        inline app::EVRState__Enum* create() {
            return il2cpp::create_object<app::EVRState__Enum>(get_class());
        }
    } // namespace EVRState__Enum
} // namespace app::classes::types
