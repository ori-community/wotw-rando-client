#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace MarkActiveScenesAsCheckpointKeepLoaded {
        namespace {
            app::MarkActiveScenesAsCheckpointKeepLoaded__Class* type_info_ref = nullptr;
        }
        app::MarkActiveScenesAsCheckpointKeepLoaded__Class** type_info = &type_info_ref;
        inline app::MarkActiveScenesAsCheckpointKeepLoaded__Class* get_class() {
            return il2cpp::get_class<app::MarkActiveScenesAsCheckpointKeepLoaded__Class>(type_info, "", "MarkActiveScenesAsCheckpointKeepLoaded");
        }
        inline app::MarkActiveScenesAsCheckpointKeepLoaded* create() {
            return il2cpp::create_object<app::MarkActiveScenesAsCheckpointKeepLoaded>(get_class());
        }
    } // namespace MarkActiveScenesAsCheckpointKeepLoaded
} // namespace app::classes::types
