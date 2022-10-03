#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace RecordingLink {
        namespace {
            app::RecordingLink__Class* type_info_ref = nullptr;
        }
        app::RecordingLink__Class** type_info = &type_info_ref;
        inline app::RecordingLink__Class* get_class() {
            return il2cpp::get_class<app::RecordingLink__Class>(type_info, "", "RecordingLink");
        }
        inline app::RecordingLink* create() {
            return il2cpp::create_object<app::RecordingLink>(get_class());
        }
    } // namespace RecordingLink
} // namespace app::classes::types
