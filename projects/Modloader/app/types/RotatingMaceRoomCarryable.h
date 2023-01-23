#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/RotatingMaceRoomCarryable__Class.h>
#include <Modloader/app/structs/RotatingMaceRoomCarryable.h>

namespace app::classes::types {
    namespace RotatingMaceRoomCarryable {
        namespace {
            inline app::RotatingMaceRoomCarryable__Class* type_info_ref = nullptr;
        }
        inline app::RotatingMaceRoomCarryable__Class** type_info = &type_info_ref;
        inline app::RotatingMaceRoomCarryable__Class* get_class() {
            return il2cpp::get_class<app::RotatingMaceRoomCarryable__Class>(type_info, "", "RotatingMaceRoomCarryable");
        }
        inline app::RotatingMaceRoomCarryable* create() {
            return il2cpp::create_object<app::RotatingMaceRoomCarryable>(get_class());
        }
    } // namespace RotatingMaceRoomCarryable
} // namespace app::classes::types
