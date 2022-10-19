#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace UberBuildMethod {
        namespace {
            inline app::UberBuildMethod__Class* type_info_ref = nullptr;
        }
        inline app::UberBuildMethod__Class** type_info = &type_info_ref;
        inline app::UberBuildMethod__Class* get_class() {
            return il2cpp::get_class<app::UberBuildMethod__Class>(type_info, "", "UberBuildMethod");
        }
        inline app::UberBuildMethod* create() {
            return il2cpp::create_object<app::UberBuildMethod>(get_class());
        }
    } // namespace UberBuildMethod
} // namespace app::classes::types
