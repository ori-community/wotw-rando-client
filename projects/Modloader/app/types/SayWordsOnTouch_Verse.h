#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/SayWordsOnTouch_Verse__Class.h>
#include <Modloader/app/structs/SayWordsOnTouch_Verse.h>
#include <Modloader/app/structs/SayWordsOnTouch_Verse__Array.h>

namespace app::classes::types {
    namespace SayWordsOnTouch_Verse {
        namespace {
            inline app::SayWordsOnTouch_Verse__Class* type_info_ref = nullptr;
        }
        inline app::SayWordsOnTouch_Verse__Class** type_info = &type_info_ref;
        inline app::SayWordsOnTouch_Verse__Class* get_class() {
            return il2cpp::get_nested_class<app::SayWordsOnTouch_Verse__Class>(type_info, "ZenFulcrum.EmbeddedBrowser", "SayWordsOnTouch", "Verse");
        }
        inline app::SayWordsOnTouch_Verse* create() {
            return il2cpp::create_object<app::SayWordsOnTouch_Verse>(get_class());
        }
        inline app::SayWordsOnTouch_Verse__Array* create_array(int size) {
            return il2cpp::array_new<app::SayWordsOnTouch_Verse__Array>(get_class(), size);
        }
        inline app::SayWordsOnTouch_Verse__Array* create_array(const std::vector<app::SayWordsOnTouch_Verse*>& items) {
            return il2cpp::array_new<app::SayWordsOnTouch_Verse__Array>(get_class(), items);
        }
    } // namespace SayWordsOnTouch_Verse
} // namespace app::classes::types
