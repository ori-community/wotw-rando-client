#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace MergeFailedEventHandler {
        namespace {
            app::MergeFailedEventHandler__Class* type_info_ref = nullptr;
        }
        app::MergeFailedEventHandler__Class** type_info = &type_info_ref;
        inline app::MergeFailedEventHandler__Class* get_class() {
            return il2cpp::get_class<app::MergeFailedEventHandler__Class>(type_info, "System.Data", "MergeFailedEventHandler");
        }
        inline app::MergeFailedEventHandler* create() {
            return il2cpp::create_object<app::MergeFailedEventHandler>(get_class());
        }
    } // namespace MergeFailedEventHandler
} // namespace app::classes::types
