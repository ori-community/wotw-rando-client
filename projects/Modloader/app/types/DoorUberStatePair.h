#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/DoorUberStatePair__Class.h>
#include <Modloader/app/structs/DoorUberStatePair.h>

namespace app::classes::types {
    namespace DoorUberStatePair {
        namespace {
            inline app::DoorUberStatePair__Class* type_info_ref = nullptr;
        }
        inline app::DoorUberStatePair__Class** type_info = &type_info_ref;
        inline app::DoorUberStatePair__Class* get_class() {
            return il2cpp::get_class<app::DoorUberStatePair__Class>(type_info, "", "DoorUberStatePair");
        }
        inline app::DoorUberStatePair* create() {
            return il2cpp::create_object<app::DoorUberStatePair>(get_class());
        }
    } // namespace DoorUberStatePair
} // namespace app::classes::types
