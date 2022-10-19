#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace KeepOnBuild {
        namespace {
            inline app::KeepOnBuild__Class* type_info_ref = nullptr;
        }
        inline app::KeepOnBuild__Class** type_info = &type_info_ref;
        inline app::KeepOnBuild__Class* get_class() {
            return il2cpp::get_class<app::KeepOnBuild__Class>(type_info, "Moon", "KeepOnBuild");
        }
        inline app::KeepOnBuild* create() {
            return il2cpp::create_object<app::KeepOnBuild>(get_class());
        }
    } // namespace KeepOnBuild
} // namespace app::classes::types
