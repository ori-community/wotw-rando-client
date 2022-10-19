#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace FBIKBoxing {
        namespace {
            inline app::FBIKBoxing__Class* type_info_ref = nullptr;
        }
        inline app::FBIKBoxing__Class** type_info = &type_info_ref;
        inline app::FBIKBoxing__Class* get_class() {
            return il2cpp::get_class<app::FBIKBoxing__Class>(type_info, "RootMotion.Demos", "FBIKBoxing");
        }
        inline app::FBIKBoxing* create() {
            return il2cpp::create_object<app::FBIKBoxing>(get_class());
        }
    } // namespace FBIKBoxing
} // namespace app::classes::types
