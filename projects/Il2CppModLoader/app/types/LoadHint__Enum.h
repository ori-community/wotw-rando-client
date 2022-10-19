#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace LoadHint__Enum {
        namespace {
            inline app::LoadHint__Enum__Class* type_info_ref = nullptr;
        }
        inline app::LoadHint__Enum__Class** type_info = &type_info_ref;
        inline app::LoadHint__Enum__Class* get_class() {
            return il2cpp::get_class<app::LoadHint__Enum__Class>(type_info, "System.Runtime.CompilerServices", "LoadHint");
        }
        inline app::LoadHint__Enum* create() {
            return il2cpp::create_object<app::LoadHint__Enum>(get_class());
        }
    } // namespace LoadHint__Enum
} // namespace app::classes::types
