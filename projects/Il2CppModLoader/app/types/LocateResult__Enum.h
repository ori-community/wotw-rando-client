#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace LocateResult__Enum {
        namespace {
            inline app::LocateResult__Enum__Class* type_info_ref = nullptr;
        }
        inline app::LocateResult__Enum__Class** type_info = &type_info_ref;
        inline app::LocateResult__Enum__Class* get_class() {
            return il2cpp::get_class<app::LocateResult__Enum__Class>(type_info, "TriangleNet", "LocateResult");
        }
        inline app::LocateResult__Enum* create() {
            return il2cpp::create_object<app::LocateResult__Enum>(get_class());
        }
    } // namespace LocateResult__Enum
} // namespace app::classes::types
