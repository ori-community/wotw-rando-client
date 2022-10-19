#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace IKPostprocess {
        namespace {
            inline app::IKPostprocess__Class* type_info_ref = nullptr;
        }
        inline app::IKPostprocess__Class** type_info = &type_info_ref;
        inline app::IKPostprocess__Class* get_class() {
            return il2cpp::get_class<app::IKPostprocess__Class>(type_info, "Moon", "IKPostprocess");
        }
        inline app::IKPostprocess* create() {
            return il2cpp::create_object<app::IKPostprocess>(get_class());
        }
    } // namespace IKPostprocess
} // namespace app::classes::types
