#pragma once
#include <Modloader/app/structs/SayWordsOnTouch_Verse__Array.h>
#include <Modloader/app/structs/SayWordsOnTouch_Verse__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace SayWordsOnTouch_Verse__Array {
        inline app::SayWordsOnTouch_Verse__Array__Class** type_info() {
            static app::SayWordsOnTouch_Verse__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::SayWordsOnTouch_Verse__Array__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::SayWordsOnTouch_Verse__Array__Class* get_class() {
            return il2cpp::get_class<app::SayWordsOnTouch_Verse__Array__Class>(type_info(), "ZenFulcrum.EmbeddedBrowser", "SayWordsOnTouch+Verse[]");
        }
        inline app::SayWordsOnTouch_Verse__Array* create() {
            return il2cpp::create_object<app::SayWordsOnTouch_Verse__Array>(get_class());
        }
    } // namespace SayWordsOnTouch_Verse__Array
} // namespace app::classes::types
