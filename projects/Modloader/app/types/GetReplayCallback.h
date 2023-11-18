#pragma once
#include <Modloader/app/structs/GetReplayCallback.h>
#include <Modloader/app/structs/GetReplayCallback__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace GetReplayCallback {
        inline app::GetReplayCallback__Class** type_info() {
            static app::GetReplayCallback__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::GetReplayCallback__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::GetReplayCallback__Class* get_class() {
            return il2cpp::get_class<app::GetReplayCallback__Class>(type_info(), "", "GetReplayCallback");
        }
        inline app::GetReplayCallback* create() {
            return il2cpp::create_object<app::GetReplayCallback>(get_class());
        }
    } // namespace GetReplayCallback
} // namespace app::classes::types
