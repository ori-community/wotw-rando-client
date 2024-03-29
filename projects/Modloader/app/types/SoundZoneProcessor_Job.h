#pragma once
#include <Modloader/app/structs/SoundZoneProcessor_Job.h>
#include <Modloader/app/structs/SoundZoneProcessor_Job__Boxed.h>
#include <Modloader/app/structs/SoundZoneProcessor_Job__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace SoundZoneProcessor_Job {
        inline app::SoundZoneProcessor_Job__Class** type_info() {
            static app::SoundZoneProcessor_Job__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::SoundZoneProcessor_Job__Class**)(modloader::win::memory::resolve_rva(0x0475BBC0));
            }
            return cache;
        }
        inline app::SoundZoneProcessor_Job__Class* get_class() {
            return il2cpp::get_nested_class<app::SoundZoneProcessor_Job__Class>(type_info(), "", "SoundZoneProcessor", "Job");
        }
        inline app::SoundZoneProcessor_Job* create() {
            return il2cpp::create_object<app::SoundZoneProcessor_Job>(get_class());
        }
        inline app::SoundZoneProcessor_Job__Boxed* box(app::SoundZoneProcessor_Job value) {
            return il2cpp::box_value<app::SoundZoneProcessor_Job__Boxed>(get_class(), value);
        }
    } // namespace SoundZoneProcessor_Job
} // namespace app::classes::types
