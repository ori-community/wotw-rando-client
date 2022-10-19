#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace EGCResults__Enum {
        namespace {
            inline app::EGCResults__Enum__Class* type_info_ref = nullptr;
        }
        inline app::EGCResults__Enum__Class** type_info = &type_info_ref;
        inline app::EGCResults__Enum__Class* get_class() {
            return il2cpp::get_class<app::EGCResults__Enum__Class>(type_info, "Steamworks", "EGCResults");
        }
        inline app::EGCResults__Enum* create() {
            return il2cpp::create_object<app::EGCResults__Enum>(get_class());
        }
    } // namespace EGCResults__Enum
} // namespace app::classes::types
