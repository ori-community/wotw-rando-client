#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace SoundZoneProcessor_Job {
        extern IL2CPP_MODLOADER_DLLEXPORT app::SoundZoneProcessor_Job__Class** type_info;
        inline app::SoundZoneProcessor_Job__Class* get_class() {
            return il2cpp::get_nested_class<app::SoundZoneProcessor_Job__Class>(type_info, "", "SoundZoneProcessor", "Job");
        }
        inline app::SoundZoneProcessor_Job* create() {
            return il2cpp::create_object<app::SoundZoneProcessor_Job>(get_class());
        }
        inline app::SoundZoneProcessor_Job__Boxed* box(app::SoundZoneProcessor_Job value) {
            return il2cpp::box_value<app::SoundZoneProcessor_Job__Boxed>(get_class(), value);
        }
    } // namespace SoundZoneProcessor_Job
} // namespace app::classes::types
