#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace RaceSystem_PrimaryFilter__Enum {
        namespace {
            inline app::RaceSystem_PrimaryFilter__Enum__Class* type_info_ref = nullptr;
        }
        inline app::RaceSystem_PrimaryFilter__Enum__Class** type_info = &type_info_ref;
        inline app::RaceSystem_PrimaryFilter__Enum__Class* get_class() {
            return il2cpp::get_nested_class<app::RaceSystem_PrimaryFilter__Enum__Class>(type_info, "", "RaceSystem", "PrimaryFilter");
        }
        inline app::RaceSystem_PrimaryFilter__Enum* create() {
            return il2cpp::create_object<app::RaceSystem_PrimaryFilter__Enum>(get_class());
        }
    } // namespace RaceSystem_PrimaryFilter__Enum
} // namespace app::classes::types
