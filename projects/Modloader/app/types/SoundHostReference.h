#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace SoundHostReference {
        inline app::SoundHostReference__Class** type_info = (app::SoundHostReference__Class**)(modloader::win::memory::resolve_rva(0x04759220));
        inline app::SoundHostReference__Class* get_class() {
            return il2cpp::get_class<app::SoundHostReference__Class>(type_info, "Moon.Wwise", "SoundHostReference");
        }
        inline app::SoundHostReference* create() {
            return il2cpp::create_object<app::SoundHostReference>(get_class());
        }
        inline app::SoundHostReference__Boxed* box(app::SoundHostReference value) {
            return il2cpp::box_value<app::SoundHostReference__Boxed>(get_class(), value);
        }
    } // namespace SoundHostReference
} // namespace app::classes::types
