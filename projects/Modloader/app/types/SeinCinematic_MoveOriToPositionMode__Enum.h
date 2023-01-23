#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/SeinCinematic_MoveOriToPositionMode__Enum__Class.h>
#include <Modloader/app/structs/SeinCinematic_MoveOriToPositionMode__Enum.h>

namespace app::classes::types {
    namespace SeinCinematic_MoveOriToPositionMode__Enum {
        namespace {
            inline app::SeinCinematic_MoveOriToPositionMode__Enum__Class* type_info_ref = nullptr;
        }
        inline app::SeinCinematic_MoveOriToPositionMode__Enum__Class** type_info = &type_info_ref;
        inline app::SeinCinematic_MoveOriToPositionMode__Enum__Class* get_class() {
            return il2cpp::get_nested_class<app::SeinCinematic_MoveOriToPositionMode__Enum__Class>(type_info, "", "SeinCinematic", "MoveOriToPositionMode");
        }
        inline app::SeinCinematic_MoveOriToPositionMode__Enum* create() {
            return il2cpp::create_object<app::SeinCinematic_MoveOriToPositionMode__Enum>(get_class());
        }
    } // namespace SeinCinematic_MoveOriToPositionMode__Enum
} // namespace app::classes::types
