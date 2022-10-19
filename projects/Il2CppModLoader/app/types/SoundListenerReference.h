#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace SoundListenerReference {
        inline app::SoundListenerReference__Class** type_info = (app::SoundListenerReference__Class**)(modloader::win::memory::resolve_rva(0x04717120));
        inline app::SoundListenerReference__Class* get_class() {
            return il2cpp::get_class<app::SoundListenerReference__Class>(type_info, "Moon.Wwise", "SoundListenerReference");
        }
        inline app::SoundListenerReference* create() {
            return il2cpp::create_object<app::SoundListenerReference>(get_class());
        }
        inline app::SoundListenerReference__Boxed* box(app::SoundListenerReference value) {
            return il2cpp::box_value<app::SoundListenerReference__Boxed>(get_class(), value);
        }
    } // namespace SoundListenerReference
} // namespace app::classes::types
