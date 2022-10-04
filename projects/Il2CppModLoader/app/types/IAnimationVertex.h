#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace IAnimationVertex {
        namespace {
            app::IAnimationVertex__Class* type_info_ref = nullptr;
        }
        app::IAnimationVertex__Class** type_info = &type_info_ref;
        inline app::IAnimationVertex__Class* get_class() {
            return il2cpp::get_class<app::IAnimationVertex__Class>(type_info, "", "IAnimationVertex");
        }
    } // namespace IAnimationVertex
} // namespace app::classes::types
