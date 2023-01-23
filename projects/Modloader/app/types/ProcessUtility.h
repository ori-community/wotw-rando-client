#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/ProcessUtility__Class.h>
#include <Modloader/app/structs/ProcessUtility.h>

namespace app::classes::types {
    namespace ProcessUtility {
        namespace {
            inline app::ProcessUtility__Class* type_info_ref = nullptr;
        }
        inline app::ProcessUtility__Class** type_info = &type_info_ref;
        inline app::ProcessUtility__Class* get_class() {
            return il2cpp::get_class<app::ProcessUtility__Class>(type_info, "", "ProcessUtility");
        }
        inline app::ProcessUtility* create() {
            return il2cpp::create_object<app::ProcessUtility>(get_class());
        }
    } // namespace ProcessUtility
} // namespace app::classes::types
