#pragma once
#include <Modloader/app/structs/ReportLocationAction.h>
#include <Modloader/app/structs/ReportLocationAction__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ReportLocationAction {
        inline app::ReportLocationAction__Class** type_info() {
            static app::ReportLocationAction__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::ReportLocationAction__Class**)(modloader::win::memory::resolve_rva(0x0475F7C0));
            }
            return cache;
        }
        inline app::ReportLocationAction__Class* get_class() {
            return il2cpp::get_class<app::ReportLocationAction__Class>(type_info(), "", "ReportLocationAction");
        }
        inline app::ReportLocationAction* create() {
            return il2cpp::create_object<app::ReportLocationAction>(get_class());
        }
    } // namespace ReportLocationAction
} // namespace app::classes::types
