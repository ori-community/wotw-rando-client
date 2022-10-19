#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace FABRIK {
        namespace {
            inline app::FABRIK__Class* type_info_ref = nullptr;
        }
        inline app::FABRIK__Class** type_info = &type_info_ref;
        inline app::FABRIK__Class* get_class() {
            return il2cpp::get_class<app::FABRIK__Class>(type_info, "RootMotion.FinalIK", "FABRIK");
        }
        inline app::FABRIK* create() {
            return il2cpp::create_object<app::FABRIK>(get_class());
        }
    } // namespace FABRIK
} // namespace app::classes::types
