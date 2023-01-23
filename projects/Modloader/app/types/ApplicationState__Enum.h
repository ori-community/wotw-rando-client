#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/ApplicationState__Enum__Class.h>
#include <Modloader/app/structs/ApplicationState__Enum.h>

namespace app::classes::types {
    namespace ApplicationState__Enum {
        namespace {
            inline app::ApplicationState__Enum__Class* type_info_ref = nullptr;
        }
        inline app::ApplicationState__Enum__Class** type_info = &type_info_ref;
        inline app::ApplicationState__Enum__Class* get_class() {
            return il2cpp::get_class<app::ApplicationState__Enum__Class>(type_info, "", "ApplicationState");
        }
        inline app::ApplicationState__Enum* create() {
            return il2cpp::create_object<app::ApplicationState__Enum>(get_class());
        }
    } // namespace ApplicationState__Enum
} // namespace app::classes::types
