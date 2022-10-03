#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace SimpleSwayAnimPostprocess_Job {
        extern IL2CPP_MODLOADER_DLLEXPORT app::SimpleSwayAnimPostprocess_Job__Class** type_info;
        inline app::SimpleSwayAnimPostprocess_Job__Class* get_class() {
            return il2cpp::get_nested_class<app::SimpleSwayAnimPostprocess_Job__Class>(type_info, "Moon", "SimpleSwayAnimPostprocess", "Job");
        }
        inline app::SimpleSwayAnimPostprocess_Job* create() {
            return il2cpp::create_object<app::SimpleSwayAnimPostprocess_Job>(get_class());
        }
        inline app::SimpleSwayAnimPostprocess_Job__Boxed* box(app::SimpleSwayAnimPostprocess_Job value) {
            return il2cpp::box_value<app::SimpleSwayAnimPostprocess_Job__Boxed>(get_class(), value);
        }
    } // namespace SimpleSwayAnimPostprocess_Job
} // namespace app::classes::types
