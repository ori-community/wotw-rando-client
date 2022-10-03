#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace EUserUGCListSortOrder__Enum {
        namespace {
            app::EUserUGCListSortOrder__Enum__Class* type_info_ref = nullptr;
        }
        app::EUserUGCListSortOrder__Enum__Class** type_info = &type_info_ref;
        inline app::EUserUGCListSortOrder__Enum__Class* get_class() {
            return il2cpp::get_class<app::EUserUGCListSortOrder__Enum__Class>(type_info, "Steamworks", "EUserUGCListSortOrder");
        }
        inline app::EUserUGCListSortOrder__Enum* create() {
            return il2cpp::create_object<app::EUserUGCListSortOrder__Enum>(get_class());
        }
    } // namespace EUserUGCListSortOrder__Enum
} // namespace app::classes::types
