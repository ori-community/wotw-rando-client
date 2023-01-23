#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/Region__Enum__Class.h>
#include <Modloader/app/structs/Region__Enum.h>

namespace app::classes::types {
    namespace Region__Enum {
        namespace {
            inline app::Region__Enum__Class* type_info_ref = nullptr;
        }
        inline app::Region__Enum__Class** type_info = &type_info_ref;
        inline app::Region__Enum__Class* get_class() {
            return il2cpp::get_class<app::Region__Enum__Class>(type_info, "PlayFab.ClientModels", "Region");
        }
        inline app::Region__Enum* create() {
            return il2cpp::create_object<app::Region__Enum>(get_class());
        }
    } // namespace Region__Enum
} // namespace app::classes::types
