#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/MergeFailedEventHandler__Class.h>
#include <Modloader/app/structs/MergeFailedEventHandler.h>

namespace app::classes::types {
    namespace MergeFailedEventHandler {
        namespace {
            inline app::MergeFailedEventHandler__Class* type_info_ref = nullptr;
        }
        inline app::MergeFailedEventHandler__Class** type_info = &type_info_ref;
        inline app::MergeFailedEventHandler__Class* get_class() {
            return il2cpp::get_class<app::MergeFailedEventHandler__Class>(type_info, "System.Data", "MergeFailedEventHandler");
        }
        inline app::MergeFailedEventHandler* create() {
            return il2cpp::create_object<app::MergeFailedEventHandler>(get_class());
        }
    } // namespace MergeFailedEventHandler
} // namespace app::classes::types
