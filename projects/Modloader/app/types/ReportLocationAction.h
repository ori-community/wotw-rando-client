#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace ReportLocationAction {
        inline app::ReportLocationAction__Class** type_info = (app::ReportLocationAction__Class**)(modloader::win::memory::resolve_rva(0x0475F7C0));
        inline app::ReportLocationAction__Class* get_class() {
            return il2cpp::get_class<app::ReportLocationAction__Class>(type_info, "", "ReportLocationAction");
        }
        inline app::ReportLocationAction* create() {
            return il2cpp::create_object<app::ReportLocationAction>(get_class());
        }
    } // namespace ReportLocationAction
} // namespace app::classes::types
