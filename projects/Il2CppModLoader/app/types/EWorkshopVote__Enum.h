#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace EWorkshopVote__Enum {
        namespace {
            inline app::EWorkshopVote__Enum__Class* type_info_ref = nullptr;
        }
        inline app::EWorkshopVote__Enum__Class** type_info = &type_info_ref;
        inline app::EWorkshopVote__Enum__Class* get_class() {
            return il2cpp::get_class<app::EWorkshopVote__Enum__Class>(type_info, "Steamworks", "EWorkshopVote");
        }
        inline app::EWorkshopVote__Enum* create() {
            return il2cpp::create_object<app::EWorkshopVote__Enum>(get_class());
        }
    } // namespace EWorkshopVote__Enum
} // namespace app::classes::types
