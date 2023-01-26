#pragma once
#include <Modloader/app/structs/SimpleSwayAnimPostprocess_Job.h>
#include <Modloader/app/structs/SimpleSwayAnimPostprocess_Job__Boxed.h>
#include <Modloader/app/structs/SimpleSwayAnimPostprocess_Job__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace SimpleSwayAnimPostprocess_Job {
        inline app::SimpleSwayAnimPostprocess_Job__Class** type_info() {
            static app::SimpleSwayAnimPostprocess_Job__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::SimpleSwayAnimPostprocess_Job__Class**)(modloader::win::memory::resolve_rva(0x04726390));
            }
            return cache;
        }
        inline app::SimpleSwayAnimPostprocess_Job__Class* get_class() {
            return il2cpp::get_nested_class<app::SimpleSwayAnimPostprocess_Job__Class>(type_info(), "Moon", "SimpleSwayAnimPostprocess", "Job");
        }
        inline app::SimpleSwayAnimPostprocess_Job* create() {
            return il2cpp::create_object<app::SimpleSwayAnimPostprocess_Job>(get_class());
        }
        inline app::SimpleSwayAnimPostprocess_Job__Boxed* box(app::SimpleSwayAnimPostprocess_Job value) {
            return il2cpp::box_value<app::SimpleSwayAnimPostprocess_Job__Boxed>(get_class(), value);
        }
    } // namespace SimpleSwayAnimPostprocess_Job
} // namespace app::classes::types
