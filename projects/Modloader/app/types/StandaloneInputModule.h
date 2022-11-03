#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace StandaloneInputModule {
        namespace {
            inline app::StandaloneInputModule__Class* type_info_ref = nullptr;
        }
        inline app::StandaloneInputModule__Class** type_info = &type_info_ref;
        inline app::StandaloneInputModule__Class* get_class() {
            return il2cpp::get_class<app::StandaloneInputModule__Class>(type_info, "UnityEngine.EventSystems", "StandaloneInputModule");
        }
        inline app::StandaloneInputModule* create() {
            return il2cpp::create_object<app::StandaloneInputModule>(get_class());
        }
    } // namespace StandaloneInputModule
} // namespace app::classes::types
