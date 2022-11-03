#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace DrivenAlpha {
        namespace {
            inline app::DrivenAlpha__Class* type_info_ref = nullptr;
        }
        inline app::DrivenAlpha__Class** type_info = &type_info_ref;
        inline app::DrivenAlpha__Class* get_class() {
            return il2cpp::get_class<app::DrivenAlpha__Class>(type_info, "Moon", "DrivenAlpha");
        }
        inline app::DrivenAlpha* create() {
            return il2cpp::create_object<app::DrivenAlpha>(get_class());
        }
    } // namespace DrivenAlpha
} // namespace app::classes::types
