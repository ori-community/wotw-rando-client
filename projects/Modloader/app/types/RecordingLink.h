#pragma once
#include <Modloader/app/structs/RecordingLink.h>
#include <Modloader/app/structs/RecordingLink__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace RecordingLink {
        inline app::RecordingLink__Class** type_info() {
            static app::RecordingLink__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::RecordingLink__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::RecordingLink__Class* get_class() {
            return il2cpp::get_class<app::RecordingLink__Class>(type_info(), "", "RecordingLink");
        }
        inline app::RecordingLink* create() {
            return il2cpp::create_object<app::RecordingLink>(get_class());
        }
    } // namespace RecordingLink
} // namespace app::classes::types
