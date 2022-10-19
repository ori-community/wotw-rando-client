#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace Axis__Enum {
        namespace {
            inline app::Axis__Enum__Class* type_info_ref = nullptr;
        }
        inline app::Axis__Enum__Class** type_info = &type_info_ref;
        inline app::Axis__Enum__Class* get_class() {
            return il2cpp::get_class<app::Axis__Enum__Class>(type_info, "RootMotion", "Axis");
        }
        inline app::Axis__Enum* create() {
            return il2cpp::create_object<app::Axis__Enum>(get_class());
        }
    } // namespace Axis__Enum
} // namespace app::classes::types
