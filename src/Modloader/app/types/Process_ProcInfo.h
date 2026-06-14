#pragma once
#include <Modloader/app/structs/Process_ProcInfo.h>
#include <Modloader/app/structs/Process_ProcInfo__Boxed.h>
#include <Modloader/app/structs/Process_ProcInfo__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace Process_ProcInfo {
        inline app::Process_ProcInfo__Class** type_info() {
            static app::Process_ProcInfo__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::Process_ProcInfo__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::Process_ProcInfo__Class* get_class() {
            return il2cpp::get_nested_class<app::Process_ProcInfo__Class>(type_info(), "System.Diagnostics", "Process", "ProcInfo");
        }
        inline app::Process_ProcInfo* create() {
            return il2cpp::create_object<app::Process_ProcInfo>(get_class());
        }
        inline app::Process_ProcInfo__Boxed* box(app::Process_ProcInfo value) {
            return il2cpp::box_value<app::Process_ProcInfo__Boxed>(get_class(), value);
        }
    } // namespace Process_ProcInfo
} // namespace app::classes::types
