#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace MergeFailedEventArgs {
        extern IL2CPP_MODLOADER_DLLEXPORT app::MergeFailedEventArgs__Class** type_info;
        inline app::MergeFailedEventArgs__Class* get_class() {
            return il2cpp::get_class<app::MergeFailedEventArgs__Class>(type_info, "System.Data", "MergeFailedEventArgs");
        }
        inline app::MergeFailedEventArgs* create() {
            return il2cpp::create_object<app::MergeFailedEventArgs>(get_class());
        }
    } // namespace MergeFailedEventArgs
} // namespace app::classes::types
