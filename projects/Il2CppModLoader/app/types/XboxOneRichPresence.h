#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace XboxOneRichPresence {
        inline app::XboxOneRichPresence__Class** type_info = (app::XboxOneRichPresence__Class**)(modloader::win::memory::resolve_rva(0x04759190));
        inline app::XboxOneRichPresence__Class* get_class() {
            return il2cpp::get_class<app::XboxOneRichPresence__Class>(type_info, "", "XboxOneRichPresence");
        }
        inline app::XboxOneRichPresence* create() {
            return il2cpp::create_object<app::XboxOneRichPresence>(get_class());
        }
    } // namespace XboxOneRichPresence
} // namespace app::classes::types
