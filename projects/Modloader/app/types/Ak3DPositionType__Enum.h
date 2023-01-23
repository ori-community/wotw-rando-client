#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/Ak3DPositionType__Enum__Class.h>
#include <Modloader/app/structs/Ak3DPositionType__Enum.h>

namespace app::classes::types {
    namespace Ak3DPositionType__Enum {
        namespace {
            inline app::Ak3DPositionType__Enum__Class* type_info_ref = nullptr;
        }
        inline app::Ak3DPositionType__Enum__Class** type_info = &type_info_ref;
        inline app::Ak3DPositionType__Enum__Class* get_class() {
            return il2cpp::get_class<app::Ak3DPositionType__Enum__Class>(type_info, "", "Ak3DPositionType");
        }
        inline app::Ak3DPositionType__Enum* create() {
            return il2cpp::create_object<app::Ak3DPositionType__Enum>(get_class());
        }
    } // namespace Ak3DPositionType__Enum
} // namespace app::classes::types
