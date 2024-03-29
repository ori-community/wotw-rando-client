#pragma once
#include <Modloader/app/structs/SoundZoneProcessor_Job_PositionZoneEvent.h>
#include <Modloader/app/structs/SoundZoneProcessor_Job_PositionZoneEvent__Array.h>
#include <Modloader/app/structs/SoundZoneProcessor_Job_PositionZoneEvent__Boxed.h>
#include <Modloader/app/structs/SoundZoneProcessor_Job_PositionZoneEvent__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace SoundZoneProcessor_Job_PositionZoneEvent {
        inline app::SoundZoneProcessor_Job_PositionZoneEvent__Class** type_info() {
            static app::SoundZoneProcessor_Job_PositionZoneEvent__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::SoundZoneProcessor_Job_PositionZoneEvent__Class**)(modloader::win::memory::resolve_rva(0x0472D098));
            }
            return cache;
        }
        inline app::SoundZoneProcessor_Job_PositionZoneEvent__Class* get_class() {
            return il2cpp::get_nested_class<app::SoundZoneProcessor_Job_PositionZoneEvent__Class>(type_info(), "", "SoundZoneProcessor+Job", "PositionZoneEvent");
        }
        inline app::SoundZoneProcessor_Job_PositionZoneEvent* create() {
            return il2cpp::create_object<app::SoundZoneProcessor_Job_PositionZoneEvent>(get_class());
        }
        inline app::SoundZoneProcessor_Job_PositionZoneEvent__Boxed* box(app::SoundZoneProcessor_Job_PositionZoneEvent value) {
            return il2cpp::box_value<app::SoundZoneProcessor_Job_PositionZoneEvent__Boxed>(get_class(), value);
        }
        inline app::SoundZoneProcessor_Job_PositionZoneEvent__Array* create_array(int size) {
            return il2cpp::array_new<app::SoundZoneProcessor_Job_PositionZoneEvent__Array>(get_class(), size);
        }
        inline app::SoundZoneProcessor_Job_PositionZoneEvent__Array* create_array(const std::vector<app::SoundZoneProcessor_Job_PositionZoneEvent>& items) {
            return il2cpp::array_new<app::SoundZoneProcessor_Job_PositionZoneEvent__Array>(get_class(), items);
        }
    } // namespace SoundZoneProcessor_Job_PositionZoneEvent
} // namespace app::classes::types
