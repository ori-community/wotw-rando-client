#pragma once
#include <Modloader/app/structs/MergeFailedEventHandler.h>
#include <Modloader/app/structs/MergeFailedEventHandler__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace MergeFailedEventHandler {
        inline app::MergeFailedEventHandler__Class** type_info() {
            static app::MergeFailedEventHandler__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::MergeFailedEventHandler__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::MergeFailedEventHandler__Class* get_class() {
            return il2cpp::get_class<app::MergeFailedEventHandler__Class>(type_info(), "System.Data", "MergeFailedEventHandler");
        }
        inline app::MergeFailedEventHandler* create() {
            return il2cpp::create_object<app::MergeFailedEventHandler>(get_class());
        }
    } // namespace MergeFailedEventHandler
} // namespace app::classes::types
