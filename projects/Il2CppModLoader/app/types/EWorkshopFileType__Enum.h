#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace EWorkshopFileType__Enum {
        namespace {
            inline app::EWorkshopFileType__Enum__Class* type_info_ref = nullptr;
        }
        inline app::EWorkshopFileType__Enum__Class** type_info = &type_info_ref;
        inline app::EWorkshopFileType__Enum__Class* get_class() {
            return il2cpp::get_class<app::EWorkshopFileType__Enum__Class>(type_info, "Steamworks", "EWorkshopFileType");
        }
        inline app::EWorkshopFileType__Enum* create() {
            return il2cpp::create_object<app::EWorkshopFileType__Enum>(get_class());
        }
    } // namespace EWorkshopFileType__Enum
} // namespace app::classes::types
