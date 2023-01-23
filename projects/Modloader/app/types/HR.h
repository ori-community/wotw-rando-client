#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/HR__Class.h>
#include <Modloader/app/structs/HR.h>

namespace app::classes::types {
    namespace HR {
        namespace {
            inline app::HR__Class* type_info_ref = nullptr;
        }
        inline app::HR__Class** type_info = &type_info_ref;
        inline app::HR__Class* get_class() {
            return il2cpp::get_class<app::HR__Class>(type_info, "XGamingRuntime.Interop", "HR");
        }
        inline app::HR* create() {
            return il2cpp::create_object<app::HR>(get_class());
        }
    } // namespace HR
} // namespace app::classes::types
