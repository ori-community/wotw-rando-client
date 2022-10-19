#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace IsRendererVisible {
        namespace {
            inline app::IsRendererVisible__Class* type_info_ref = nullptr;
        }
        inline app::IsRendererVisible__Class** type_info = &type_info_ref;
        inline app::IsRendererVisible__Class* get_class() {
            return il2cpp::get_class<app::IsRendererVisible__Class>(type_info, "", "IsRendererVisible");
        }
        inline app::IsRendererVisible* create() {
            return il2cpp::create_object<app::IsRendererVisible>(get_class());
        }
    } // namespace IsRendererVisible
} // namespace app::classes::types
