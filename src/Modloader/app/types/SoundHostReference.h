#pragma once
#include <Modloader/app/structs/SoundHostReference.h>
#include <Modloader/app/structs/SoundHostReference__Boxed.h>
#include <Modloader/app/structs/SoundHostReference__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace SoundHostReference {
        inline app::SoundHostReference__Class** type_info() {
            static app::SoundHostReference__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::SoundHostReference__Class**)(modloader::win::memory::resolve_rva(0x04759220));
            }
            return cache;
        }
        inline app::SoundHostReference__Class* get_class() {
            return il2cpp::get_class<app::SoundHostReference__Class>(type_info(), "Moon.Wwise", "SoundHostReference");
        }
        inline app::SoundHostReference* create() {
            return il2cpp::create_object<app::SoundHostReference>(get_class());
        }
        inline app::SoundHostReference__Boxed* box(app::SoundHostReference value) {
            return il2cpp::box_value<app::SoundHostReference__Boxed>(get_class(), value);
        }
    } // namespace SoundHostReference
} // namespace app::classes::types
