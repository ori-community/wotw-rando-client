#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/MoonCustomDoorWithSlots__Class.h>
#include <Modloader/app/structs/MoonCustomDoorWithSlots.h>

namespace app::classes::types {
    namespace MoonCustomDoorWithSlots {
        namespace {
            inline app::MoonCustomDoorWithSlots__Class* type_info_ref = nullptr;
        }
        inline app::MoonCustomDoorWithSlots__Class** type_info = &type_info_ref;
        inline app::MoonCustomDoorWithSlots__Class* get_class() {
            return il2cpp::get_class<app::MoonCustomDoorWithSlots__Class>(type_info, "", "MoonCustomDoorWithSlots");
        }
        inline app::MoonCustomDoorWithSlots* create() {
            return il2cpp::create_object<app::MoonCustomDoorWithSlots>(get_class());
        }
    } // namespace MoonCustomDoorWithSlots
} // namespace app::classes::types
