#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace ReportLocationAction_c {
        inline app::ReportLocationAction_c__Class** type_info = (app::ReportLocationAction_c__Class**)(modloader::win::memory::resolve_rva(0x047311C0));
        inline app::ReportLocationAction_c__Class* get_class() {
            return il2cpp::get_nested_class<app::ReportLocationAction_c__Class>(type_info, "", "ReportLocationAction", "<>c");
        }
        inline app::ReportLocationAction_c* create() {
            return il2cpp::create_object<app::ReportLocationAction_c>(get_class());
        }
    } // namespace ReportLocationAction_c
} // namespace app::classes::types
