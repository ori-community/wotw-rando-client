#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace EInputSource__Enum {
        namespace {
            app::EInputSource__Enum__Class* type_info_ref = nullptr;
        }
        app::EInputSource__Enum__Class** type_info = &type_info_ref;
        inline app::EInputSource__Enum__Class* get_class() {
            return il2cpp::get_class<app::EInputSource__Enum__Class>(type_info, "Steamworks", "EInputSource");
        }
        inline app::EInputSource__Enum* create() {
            return il2cpp::create_object<app::EInputSource__Enum>(get_class());
        }
    } // namespace EInputSource__Enum
} // namespace app::classes::types
