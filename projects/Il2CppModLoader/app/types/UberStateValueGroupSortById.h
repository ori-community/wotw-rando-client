#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace UberStateValueGroupSortById {
        inline app::UberStateValueGroupSortById__Class** type_info = (app::UberStateValueGroupSortById__Class**)(modloader::win::memory::resolve_rva(0x04775960));
        inline app::UberStateValueGroupSortById__Class* get_class() {
            return il2cpp::get_class<app::UberStateValueGroupSortById__Class>(type_info, "Moon.UberStateVisualization", "UberStateValueGroupSortById");
        }
        inline app::UberStateValueGroupSortById* create() {
            return il2cpp::create_object<app::UberStateValueGroupSortById>(get_class());
        }
    } // namespace UberStateValueGroupSortById
} // namespace app::classes::types
