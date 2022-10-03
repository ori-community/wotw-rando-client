#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace SimpleSwayAnimPostprocess_SwayChain {
        extern IL2CPP_MODLOADER_DLLEXPORT app::SimpleSwayAnimPostprocess_SwayChain__Class** type_info;
        inline app::SimpleSwayAnimPostprocess_SwayChain__Class* get_class() {
            return il2cpp::get_nested_class<app::SimpleSwayAnimPostprocess_SwayChain__Class>(type_info, "Moon", "SimpleSwayAnimPostprocess", "SwayChain");
        }
        inline app::SimpleSwayAnimPostprocess_SwayChain* create() {
            return il2cpp::create_object<app::SimpleSwayAnimPostprocess_SwayChain>(get_class());
        }
        inline app::SimpleSwayAnimPostprocess_SwayChain__Array* create_array(int size) {
            return il2cpp::array_new<app::SimpleSwayAnimPostprocess_SwayChain__Array>(get_class(), size);
        }
    } // namespace SimpleSwayAnimPostprocess_SwayChain
} // namespace app::classes::types
