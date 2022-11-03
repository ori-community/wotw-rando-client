#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace Evidence {
        namespace {
            inline app::Evidence__Class* type_info_ref = nullptr;
        }
        inline app::Evidence__Class** type_info = &type_info_ref;
        inline app::Evidence__Class* get_class() {
            return il2cpp::get_class<app::Evidence__Class>(type_info, "System.Security.Policy", "Evidence");
        }
        inline app::Evidence* create() {
            return il2cpp::create_object<app::Evidence>(get_class());
        }
    } // namespace Evidence
} // namespace app::classes::types
