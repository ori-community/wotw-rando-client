#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace SayWordsOnTouch_Verse {
        namespace {
            app::SayWordsOnTouch_Verse__Class* type_info_ref = nullptr;
        }
        app::SayWordsOnTouch_Verse__Class** type_info = &type_info_ref;
        inline app::SayWordsOnTouch_Verse__Class* get_class() {
            return il2cpp::get_nested_class<app::SayWordsOnTouch_Verse__Class>(type_info, "ZenFulcrum.EmbeddedBrowser", "SayWordsOnTouch", "Verse");
        }
        inline app::SayWordsOnTouch_Verse* create() {
            return il2cpp::create_object<app::SayWordsOnTouch_Verse>(get_class());
        }
        inline app::SayWordsOnTouch_Verse__Array* create_array(int size) {
            return il2cpp::array_new<app::SayWordsOnTouch_Verse__Array>(get_class(), size);
        }
    } // namespace SayWordsOnTouch_Verse
} // namespace app::classes::types
