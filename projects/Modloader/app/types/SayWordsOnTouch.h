#pragma once
#include <Modloader/app/structs/SayWordsOnTouch.h>
#include <Modloader/app/structs/SayWordsOnTouch__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace SayWordsOnTouch {
        inline app::SayWordsOnTouch__Class** type_info() {
            static app::SayWordsOnTouch__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::SayWordsOnTouch__Class**)(modloader::win::memory::resolve_rva(0x04748390));
            }
            return cache;
        }
        inline app::SayWordsOnTouch__Class* get_class() {
            return il2cpp::get_class<app::SayWordsOnTouch__Class>(type_info(), "ZenFulcrum.EmbeddedBrowser", "SayWordsOnTouch");
        }
        inline app::SayWordsOnTouch* create() {
            return il2cpp::create_object<app::SayWordsOnTouch>(get_class());
        }
    } // namespace SayWordsOnTouch
} // namespace app::classes::types
