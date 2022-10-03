#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace UberStateValueGroupSortById {
        extern IL2CPP_MODLOADER_DLLEXPORT app::UberStateValueGroupSortById__Class** type_info;
        inline app::UberStateValueGroupSortById__Class* get_class() {
            return il2cpp::get_class<app::UberStateValueGroupSortById__Class>(type_info, "Moon.UberStateVisualization", "UberStateValueGroupSortById");
        }
        inline app::UberStateValueGroupSortById* create() {
            return il2cpp::create_object<app::UberStateValueGroupSortById>(get_class());
        }
    } // namespace UberStateValueGroupSortById
} // namespace app::classes::types
