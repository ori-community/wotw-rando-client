#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace SayWordsOnTouch {
        inline app::SayWordsOnTouch__Class** type_info = (app::SayWordsOnTouch__Class**)(modloader::win::memory::resolve_rva(0x04748390));
        inline app::SayWordsOnTouch__Class* get_class() {
            return il2cpp::get_class<app::SayWordsOnTouch__Class>(type_info, "ZenFulcrum.EmbeddedBrowser", "SayWordsOnTouch");
        }
        inline app::SayWordsOnTouch* create() {
            return il2cpp::create_object<app::SayWordsOnTouch>(get_class());
        }
    } // namespace SayWordsOnTouch
} // namespace app::classes::types
