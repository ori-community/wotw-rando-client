#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/WindVent_State__Enum__Class.h>
#include <Modloader/app/structs/WindVent_State__Enum.h>

namespace app::classes::types {
    namespace WindVent_State__Enum {
        namespace {
            inline app::WindVent_State__Enum__Class* type_info_ref = nullptr;
        }
        inline app::WindVent_State__Enum__Class** type_info = &type_info_ref;
        inline app::WindVent_State__Enum__Class* get_class() {
            return il2cpp::get_nested_class<app::WindVent_State__Enum__Class>(type_info, "", "WindVent", "State");
        }
        inline app::WindVent_State__Enum* create() {
            return il2cpp::create_object<app::WindVent_State__Enum>(get_class());
        }
    } // namespace WindVent_State__Enum
} // namespace app::classes::types
