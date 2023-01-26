#pragma once
#include <Modloader/app/structs/MarkActiveScenesAsCheckpointKeepLoaded.h>
#include <Modloader/app/structs/MarkActiveScenesAsCheckpointKeepLoaded__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace MarkActiveScenesAsCheckpointKeepLoaded {
        inline app::MarkActiveScenesAsCheckpointKeepLoaded__Class** type_info() {
            static app::MarkActiveScenesAsCheckpointKeepLoaded__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::MarkActiveScenesAsCheckpointKeepLoaded__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::MarkActiveScenesAsCheckpointKeepLoaded__Class* get_class() {
            return il2cpp::get_class<app::MarkActiveScenesAsCheckpointKeepLoaded__Class>(type_info(), "", "MarkActiveScenesAsCheckpointKeepLoaded");
        }
        inline app::MarkActiveScenesAsCheckpointKeepLoaded* create() {
            return il2cpp::create_object<app::MarkActiveScenesAsCheckpointKeepLoaded>(get_class());
        }
    } // namespace MarkActiveScenesAsCheckpointKeepLoaded
} // namespace app::classes::types
