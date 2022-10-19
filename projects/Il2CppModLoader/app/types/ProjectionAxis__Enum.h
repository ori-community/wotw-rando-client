#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace ProjectionAxis__Enum {
        namespace {
            inline app::ProjectionAxis__Enum__Class* type_info_ref = nullptr;
        }
        inline app::ProjectionAxis__Enum__Class** type_info = &type_info_ref;
        inline app::ProjectionAxis__Enum__Class* get_class() {
            return il2cpp::get_class<app::ProjectionAxis__Enum__Class>(type_info, "", "ProjectionAxis");
        }
        inline app::ProjectionAxis__Enum* create() {
            return il2cpp::create_object<app::ProjectionAxis__Enum>(get_class());
        }
    } // namespace ProjectionAxis__Enum
} // namespace app::classes::types
