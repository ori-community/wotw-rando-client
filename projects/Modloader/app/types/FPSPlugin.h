#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace FPSPlugin {
        namespace {
            inline app::FPSPlugin__Class* type_info_ref = nullptr;
        }
        inline app::FPSPlugin__Class** type_info = &type_info_ref;
        inline app::FPSPlugin__Class* get_class() {
            return il2cpp::get_class<app::FPSPlugin__Class>(type_info, "", "FPSPlugin");
        }
        inline app::FPSPlugin* create() {
            return il2cpp::create_object<app::FPSPlugin>(get_class());
        }
    } // namespace FPSPlugin
} // namespace app::classes::types
