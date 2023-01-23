#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/NPCAnchorConfiguration__Enum__Class.h>
#include <Modloader/app/structs/NPCAnchorConfiguration__Enum.h>

namespace app::classes::types {
    namespace NPCAnchorConfiguration__Enum {
        namespace {
            inline app::NPCAnchorConfiguration__Enum__Class* type_info_ref = nullptr;
        }
        inline app::NPCAnchorConfiguration__Enum__Class** type_info = &type_info_ref;
        inline app::NPCAnchorConfiguration__Enum__Class* get_class() {
            return il2cpp::get_class<app::NPCAnchorConfiguration__Enum__Class>(type_info, "Moon", "NPCAnchorConfiguration");
        }
        inline app::NPCAnchorConfiguration__Enum* create() {
            return il2cpp::create_object<app::NPCAnchorConfiguration__Enum>(get_class());
        }
    } // namespace NPCAnchorConfiguration__Enum
} // namespace app::classes::types
