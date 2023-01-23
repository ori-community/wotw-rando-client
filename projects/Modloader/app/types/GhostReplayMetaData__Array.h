#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/GhostReplayMetaData__Array__Class.h>
#include <Modloader/app/structs/GhostReplayMetaData__Array.h>

namespace app::classes::types {
    namespace GhostReplayMetaData__Array {
        namespace {
            inline app::GhostReplayMetaData__Array__Class* type_info_ref = nullptr;
        }
        inline app::GhostReplayMetaData__Array__Class** type_info = &type_info_ref;
        inline app::GhostReplayMetaData__Array__Class* get_class() {
            return il2cpp::get_class<app::GhostReplayMetaData__Array__Class>(type_info, "", "GhostReplayMetaData[]");
        }
        inline app::GhostReplayMetaData__Array* create() {
            return il2cpp::create_object<app::GhostReplayMetaData__Array>(get_class());
        }
    } // namespace GhostReplayMetaData__Array
} // namespace app::classes::types
