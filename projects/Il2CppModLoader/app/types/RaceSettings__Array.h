#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace RaceSettings__Array {
        namespace {
            inline app::RaceSettings__Array__Class* type_info_ref = nullptr;
        }
        inline app::RaceSettings__Array__Class** type_info = &type_info_ref;
        inline app::RaceSettings__Array__Class* get_class() {
            return il2cpp::get_class<app::RaceSettings__Array__Class>(type_info, "", "RaceSettings[]");
        }
        inline app::RaceSettings__Array* create() {
            return il2cpp::create_object<app::RaceSettings__Array>(get_class());
        }
    } // namespace RaceSettings__Array
} // namespace app::classes::types
