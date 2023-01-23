#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/SayWordsOnTouch_Verse__Array__Class.h>
#include <Modloader/app/structs/SayWordsOnTouch_Verse__Array.h>

namespace app::classes::types {
    namespace SayWordsOnTouch_Verse__Array {
        namespace {
            inline app::SayWordsOnTouch_Verse__Array__Class* type_info_ref = nullptr;
        }
        inline app::SayWordsOnTouch_Verse__Array__Class** type_info = &type_info_ref;
        inline app::SayWordsOnTouch_Verse__Array__Class* get_class() {
            return il2cpp::get_class<app::SayWordsOnTouch_Verse__Array__Class>(type_info, "ZenFulcrum.EmbeddedBrowser", "SayWordsOnTouch+Verse[]");
        }
        inline app::SayWordsOnTouch_Verse__Array* create() {
            return il2cpp::create_object<app::SayWordsOnTouch_Verse__Array>(get_class());
        }
    } // namespace SayWordsOnTouch_Verse__Array
} // namespace app::classes::types
