#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace DataCommonEventSource {
        extern IL2CPP_MODLOADER_DLLEXPORT app::DataCommonEventSource__Class** type_info;
        inline app::DataCommonEventSource__Class* get_class() {
            return il2cpp::get_class<app::DataCommonEventSource__Class>(type_info, "System.Data", "DataCommonEventSource");
        }
        inline app::DataCommonEventSource* create() {
            return il2cpp::create_object<app::DataCommonEventSource>(get_class());
        }
    } // namespace DataCommonEventSource
} // namespace app::classes::types
