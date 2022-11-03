#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace RecordingLink {
        namespace {
            inline app::RecordingLink__Class* type_info_ref = nullptr;
        }
        inline app::RecordingLink__Class** type_info = &type_info_ref;
        inline app::RecordingLink__Class* get_class() {
            return il2cpp::get_class<app::RecordingLink__Class>(type_info, "", "RecordingLink");
        }
        inline app::RecordingLink* create() {
            return il2cpp::create_object<app::RecordingLink>(get_class());
        }
    } // namespace RecordingLink
} // namespace app::classes::types
