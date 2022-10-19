#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace GrounderFBBIK {
        namespace {
            inline app::GrounderFBBIK__Class* type_info_ref = nullptr;
        }
        inline app::GrounderFBBIK__Class** type_info = &type_info_ref;
        inline app::GrounderFBBIK__Class* get_class() {
            return il2cpp::get_class<app::GrounderFBBIK__Class>(type_info, "RootMotion.FinalIK", "GrounderFBBIK");
        }
        inline app::GrounderFBBIK* create() {
            return il2cpp::create_object<app::GrounderFBBIK>(get_class());
        }
    } // namespace GrounderFBBIK
} // namespace app::classes::types
