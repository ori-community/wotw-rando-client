#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/ProcessInfo__Class.h>
#include <Modloader/app/structs/ProcessInfo.h>

namespace app::classes::types {
    namespace ProcessInfo {
        namespace {
            inline app::ProcessInfo__Class* type_info_ref = nullptr;
        }
        inline app::ProcessInfo__Class** type_info = &type_info_ref;
        inline app::ProcessInfo__Class* get_class() {
            return il2cpp::get_class<app::ProcessInfo__Class>(type_info, "System.Diagnostics", "ProcessInfo");
        }
        inline app::ProcessInfo* create() {
            return il2cpp::create_object<app::ProcessInfo>(get_class());
        }
    } // namespace ProcessInfo
} // namespace app::classes::types
