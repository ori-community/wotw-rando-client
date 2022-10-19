#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace ReplaySetting__Array {
        namespace {
            inline app::ReplaySetting__Array__Class* type_info_ref = nullptr;
        }
        inline app::ReplaySetting__Array__Class** type_info = &type_info_ref;
        inline app::ReplaySetting__Array__Class* get_class() {
            return il2cpp::get_class<app::ReplaySetting__Array__Class>(type_info, "", "ReplaySetting[]");
        }
        inline app::ReplaySetting__Array* create() {
            return il2cpp::create_object<app::ReplaySetting__Array>(get_class());
        }
    } // namespace ReplaySetting__Array
} // namespace app::classes::types
