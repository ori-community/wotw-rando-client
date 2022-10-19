#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace RemoveOnBuild {
        namespace {
            inline app::RemoveOnBuild__Class* type_info_ref = nullptr;
        }
        inline app::RemoveOnBuild__Class** type_info = &type_info_ref;
        inline app::RemoveOnBuild__Class* get_class() {
            return il2cpp::get_class<app::RemoveOnBuild__Class>(type_info, "Moon", "RemoveOnBuild");
        }
        inline app::RemoveOnBuild* create() {
            return il2cpp::create_object<app::RemoveOnBuild>(get_class());
        }
    } // namespace RemoveOnBuild
} // namespace app::classes::types
