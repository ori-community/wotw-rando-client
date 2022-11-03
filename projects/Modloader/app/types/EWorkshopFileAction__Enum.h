#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace EWorkshopFileAction__Enum {
        namespace {
            inline app::EWorkshopFileAction__Enum__Class* type_info_ref = nullptr;
        }
        inline app::EWorkshopFileAction__Enum__Class** type_info = &type_info_ref;
        inline app::EWorkshopFileAction__Enum__Class* get_class() {
            return il2cpp::get_class<app::EWorkshopFileAction__Enum__Class>(type_info, "Steamworks", "EWorkshopFileAction");
        }
        inline app::EWorkshopFileAction__Enum* create() {
            return il2cpp::create_object<app::EWorkshopFileAction__Enum>(get_class());
        }
    } // namespace EWorkshopFileAction__Enum
} // namespace app::classes::types
