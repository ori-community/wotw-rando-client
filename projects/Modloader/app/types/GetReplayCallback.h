#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/GetReplayCallback__Class.h>
#include <Modloader/app/structs/GetReplayCallback.h>

namespace app::classes::types {
    namespace GetReplayCallback {
        namespace {
            inline app::GetReplayCallback__Class* type_info_ref = nullptr;
        }
        inline app::GetReplayCallback__Class** type_info = &type_info_ref;
        inline app::GetReplayCallback__Class* get_class() {
            return il2cpp::get_class<app::GetReplayCallback__Class>(type_info, "", "GetReplayCallback");
        }
        inline app::GetReplayCallback* create() {
            return il2cpp::create_object<app::GetReplayCallback>(get_class());
        }
    } // namespace GetReplayCallback
} // namespace app::classes::types
