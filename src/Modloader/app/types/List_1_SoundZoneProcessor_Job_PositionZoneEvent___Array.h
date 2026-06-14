#pragma once
#include <Modloader/app/structs/List_1_SoundZoneProcessor_Job_PositionZoneEvent___Array.h>
#include <Modloader/app/structs/List_1_SoundZoneProcessor_Job_PositionZoneEvent___Array__Array.h>
#include <Modloader/app/structs/List_1_SoundZoneProcessor_Job_PositionZoneEvent___Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace List_1_SoundZoneProcessor_Job_PositionZoneEvent___Array {
        inline app::List_1_SoundZoneProcessor_Job_PositionZoneEvent___Array__Class** type_info() {
            static app::List_1_SoundZoneProcessor_Job_PositionZoneEvent___Array__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::List_1_SoundZoneProcessor_Job_PositionZoneEvent___Array__Class**)(modloader::win::memory::resolve_rva(0x04772AA8));
            }
            return cache;
        }
        inline app::List_1_SoundZoneProcessor_Job_PositionZoneEvent___Array__Class* get_class() {
            return il2cpp::get_class<app::List_1_SoundZoneProcessor_Job_PositionZoneEvent___Array__Class>(type_info(), "System.Collections.Generic", "List`1[SoundZoneProcessor+Job+PositionZoneEvent][]");
        }
        inline app::List_1_SoundZoneProcessor_Job_PositionZoneEvent___Array* create() {
            return il2cpp::create_object<app::List_1_SoundZoneProcessor_Job_PositionZoneEvent___Array>(get_class());
        }
        inline app::List_1_SoundZoneProcessor_Job_PositionZoneEvent___Array__Array* create_array(int size) {
            return il2cpp::array_new<app::List_1_SoundZoneProcessor_Job_PositionZoneEvent___Array__Array>(get_class(), size);
        }
        inline app::List_1_SoundZoneProcessor_Job_PositionZoneEvent___Array__Array* create_array(const std::vector<app::List_1_SoundZoneProcessor_Job_PositionZoneEvent___Array*>& items) {
            return il2cpp::array_new<app::List_1_SoundZoneProcessor_Job_PositionZoneEvent___Array__Array>(get_class(), items);
        }
    } // namespace List_1_SoundZoneProcessor_Job_PositionZoneEvent___Array
} // namespace app::classes::types
