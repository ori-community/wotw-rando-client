#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace SoundHostReference {
        extern IL2CPP_MODLOADER_DLLEXPORT app::SoundHostReference__Class** type_info;
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
