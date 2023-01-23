#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/PickupMessageIcon__Class.h>
#include <Modloader/app/structs/PickupMessageIcon.h>

namespace app::classes::types {
    namespace PickupMessageIcon {
        namespace {
            inline app::PickupMessageIcon__Class* type_info_ref = nullptr;
        }
        inline app::PickupMessageIcon__Class** type_info = &type_info_ref;
        inline app::PickupMessageIcon__Class* get_class() {
            return il2cpp::get_class<app::PickupMessageIcon__Class>(type_info, "", "PickupMessageIcon");
        }
        inline app::PickupMessageIcon* create() {
            return il2cpp::create_object<app::PickupMessageIcon>(get_class());
        }
    } // namespace PickupMessageIcon
} // namespace app::classes::types
