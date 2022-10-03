#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace ServerTimelineSequence {
        namespace {
            app::ServerTimelineSequence__Class* type_info_ref = nullptr;
        }
        app::ServerTimelineSequence__Class** type_info = &type_info_ref;
        inline app::ServerTimelineSequence__Class* get_class() {
            return il2cpp::get_class<app::ServerTimelineSequence__Class>(type_info, "", "ServerTimelineSequence");
        }
        inline app::ServerTimelineSequence* create() {
            return il2cpp::create_object<app::ServerTimelineSequence>(get_class());
        }
    } // namespace ServerTimelineSequence
} // namespace app::classes::types
