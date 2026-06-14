#pragma once
#include <Modloader/app/structs/StopWatchWrapper.h>
#include <Modloader/app/structs/StopWatchWrapper__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace StopWatchWrapper {
        inline app::StopWatchWrapper__Class** type_info() {
            static app::StopWatchWrapper__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::StopWatchWrapper__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::StopWatchWrapper__Class* get_class() {
            return il2cpp::get_class<app::StopWatchWrapper__Class>(type_info(), "", "StopWatchWrapper");
        }
        inline app::StopWatchWrapper* create() {
            return il2cpp::create_object<app::StopWatchWrapper>(get_class());
        }
    } // namespace StopWatchWrapper
} // namespace app::classes::types
