#pragma once
#include <Modloader/app/structs/ReportLocationAction_c.h>
#include <Modloader/app/structs/ReportLocationAction_c__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ReportLocationAction_c {
        inline app::ReportLocationAction_c__Class** type_info() {
            static app::ReportLocationAction_c__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::ReportLocationAction_c__Class**)(modloader::win::memory::resolve_rva(0x047311C0));
            }
            return cache;
        }
        inline app::ReportLocationAction_c__Class* get_class() {
            return il2cpp::get_nested_class<app::ReportLocationAction_c__Class>(type_info(), "", "ReportLocationAction", "<>c");
        }
        inline app::ReportLocationAction_c* create() {
            return il2cpp::create_object<app::ReportLocationAction_c>(get_class());
        }
    } // namespace ReportLocationAction_c
} // namespace app::classes::types
