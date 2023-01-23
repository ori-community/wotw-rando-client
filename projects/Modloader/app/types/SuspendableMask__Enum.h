#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/SuspendableMask__Enum__Class.h>
#include <Modloader/app/structs/SuspendableMask__Enum.h>

namespace app::classes::types {
    namespace SuspendableMask__Enum {
        namespace {
            inline app::SuspendableMask__Enum__Class* type_info_ref = nullptr;
        }
        inline app::SuspendableMask__Enum__Class** type_info = &type_info_ref;
        inline app::SuspendableMask__Enum__Class* get_class() {
            return il2cpp::get_class<app::SuspendableMask__Enum__Class>(type_info, "Moon", "SuspendableMask");
        }
        inline app::SuspendableMask__Enum* create() {
            return il2cpp::create_object<app::SuspendableMask__Enum>(get_class());
        }
    } // namespace SuspendableMask__Enum
} // namespace app::classes::types
