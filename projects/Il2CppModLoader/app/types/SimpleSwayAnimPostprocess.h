#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace SimpleSwayAnimPostprocess {
        extern IL2CPP_MODLOADER_DLLEXPORT app::SimpleSwayAnimPostprocess__Class** type_info;
        inline app::SimpleSwayAnimPostprocess__Class* get_class() {
            return il2cpp::get_class<app::SimpleSwayAnimPostprocess__Class>(type_info, "Moon", "SimpleSwayAnimPostprocess");
        }
        inline app::SimpleSwayAnimPostprocess* create() {
            return il2cpp::create_object<app::SimpleSwayAnimPostprocess>(get_class());
        }
        inline app::SimpleSwayAnimPostprocess__Array* create_array(int size) {
            return il2cpp::array_new<app::SimpleSwayAnimPostprocess__Array>(get_class(), size);
        }
    } // namespace SimpleSwayAnimPostprocess
} // namespace app::classes::types
