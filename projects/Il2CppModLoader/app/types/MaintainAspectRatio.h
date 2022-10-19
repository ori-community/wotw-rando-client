#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace MaintainAspectRatio {
        namespace {
            inline app::MaintainAspectRatio__Class* type_info_ref = nullptr;
        }
        inline app::MaintainAspectRatio__Class** type_info = &type_info_ref;
        inline app::MaintainAspectRatio__Class* get_class() {
            return il2cpp::get_class<app::MaintainAspectRatio__Class>(type_info, "", "MaintainAspectRatio");
        }
        inline app::MaintainAspectRatio* create() {
            return il2cpp::create_object<app::MaintainAspectRatio>(get_class());
        }
    } // namespace MaintainAspectRatio
} // namespace app::classes::types
