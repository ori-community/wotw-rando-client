#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace ArtificialSoundHostReference {
        inline app::ArtificialSoundHostReference__Class** type_info = (app::ArtificialSoundHostReference__Class**)(modloader::win::memory::resolve_rva(0x04707380));
        inline app::ArtificialSoundHostReference__Class* get_class() {
            return il2cpp::get_class<app::ArtificialSoundHostReference__Class>(type_info, "Moon.Wwise", "ArtificialSoundHostReference");
        }
        inline app::ArtificialSoundHostReference* create() {
            return il2cpp::create_object<app::ArtificialSoundHostReference>(get_class());
        }
        inline app::ArtificialSoundHostReference__Boxed* box(app::ArtificialSoundHostReference value) {
            return il2cpp::box_value<app::ArtificialSoundHostReference__Boxed>(get_class(), value);
        }
    } // namespace ArtificialSoundHostReference
} // namespace app::classes::types
