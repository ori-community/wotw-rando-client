#pragma once
#include <Modloader/app/structs/GetReplaysCallback.h>
#include <Modloader/app/structs/GetReplaysCallback__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace GetReplaysCallback {
        inline app::GetReplaysCallback__Class** type_info() {
            static app::GetReplaysCallback__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::GetReplaysCallback__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::GetReplaysCallback__Class* get_class() {
            return il2cpp::get_class<app::GetReplaysCallback__Class>(type_info(), "", "GetReplaysCallback");
        }
        inline app::GetReplaysCallback* create() {
            return il2cpp::create_object<app::GetReplaysCallback>(get_class());
        }
    } // namespace GetReplaysCallback
} // namespace app::classes::types
