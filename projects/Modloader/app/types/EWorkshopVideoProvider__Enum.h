#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace EWorkshopVideoProvider__Enum {
        namespace {
            inline app::EWorkshopVideoProvider__Enum__Class* type_info_ref = nullptr;
        }
        inline app::EWorkshopVideoProvider__Enum__Class** type_info = &type_info_ref;
        inline app::EWorkshopVideoProvider__Enum__Class* get_class() {
            return il2cpp::get_class<app::EWorkshopVideoProvider__Enum__Class>(type_info, "Steamworks", "EWorkshopVideoProvider");
        }
        inline app::EWorkshopVideoProvider__Enum* create() {
            return il2cpp::create_object<app::EWorkshopVideoProvider__Enum>(get_class());
        }
    } // namespace EWorkshopVideoProvider__Enum
} // namespace app::classes::types
