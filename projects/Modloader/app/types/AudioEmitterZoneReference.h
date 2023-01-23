#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/AudioEmitterZoneReference__Class.h>
#include <Modloader/app/structs/AudioEmitterZoneReference.h>
#include <Modloader/app/structs/AudioEmitterZoneReference__Boxed.h>

namespace app::classes::types {
    namespace AudioEmitterZoneReference {
        inline app::AudioEmitterZoneReference__Class** type_info = (app::AudioEmitterZoneReference__Class**)(modloader::win::memory::resolve_rva(0x04725E10));
        inline app::AudioEmitterZoneReference__Class* get_class() {
            return il2cpp::get_class<app::AudioEmitterZoneReference__Class>(type_info, "Moon.Wwise", "AudioEmitterZoneReference");
        }
        inline app::AudioEmitterZoneReference* create() {
            return il2cpp::create_object<app::AudioEmitterZoneReference>(get_class());
        }
        inline app::AudioEmitterZoneReference__Boxed* box(app::AudioEmitterZoneReference value) {
            return il2cpp::box_value<app::AudioEmitterZoneReference__Boxed>(get_class(), value);
        }
    } // namespace AudioEmitterZoneReference
} // namespace app::classes::types
