#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/ClearPolicy__Enum__Class.h>
#include <Modloader/app/structs/ClearPolicy__Enum.h>

namespace app::classes::types {
    namespace ClearPolicy__Enum {
        namespace {
            inline app::ClearPolicy__Enum__Class* type_info_ref = nullptr;
        }
        inline app::ClearPolicy__Enum__Class** type_info = &type_info_ref;
        inline app::ClearPolicy__Enum__Class* get_class() {
            return il2cpp::get_class<app::ClearPolicy__Enum__Class>(type_info, "Moon.Rendering", "ClearPolicy");
        }
        inline app::ClearPolicy__Enum* create() {
            return il2cpp::create_object<app::ClearPolicy__Enum>(get_class());
        }
    } // namespace ClearPolicy__Enum
} // namespace app::classes::types
