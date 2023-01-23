#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/SimpleSwayBossAnimPostprocess_Job__Class.h>
#include <Modloader/app/structs/SimpleSwayBossAnimPostprocess_Job.h>
#include <Modloader/app/structs/SimpleSwayBossAnimPostprocess_Job__Boxed.h>

namespace app::classes::types {
    namespace SimpleSwayBossAnimPostprocess_Job {
        inline app::SimpleSwayBossAnimPostprocess_Job__Class** type_info = (app::SimpleSwayBossAnimPostprocess_Job__Class**)(modloader::win::memory::resolve_rva(0x0473E998));
        inline app::SimpleSwayBossAnimPostprocess_Job__Class* get_class() {
            return il2cpp::get_nested_class<app::SimpleSwayBossAnimPostprocess_Job__Class>(type_info, "Moon", "SimpleSwayBossAnimPostprocess", "Job");
        }
        inline app::SimpleSwayBossAnimPostprocess_Job* create() {
            return il2cpp::create_object<app::SimpleSwayBossAnimPostprocess_Job>(get_class());
        }
        inline app::SimpleSwayBossAnimPostprocess_Job__Boxed* box(app::SimpleSwayBossAnimPostprocess_Job value) {
            return il2cpp::box_value<app::SimpleSwayBossAnimPostprocess_Job__Boxed>(get_class(), value);
        }
    } // namespace SimpleSwayBossAnimPostprocess_Job
} // namespace app::classes::types
