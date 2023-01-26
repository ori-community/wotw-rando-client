#pragma once
#include <Modloader/app/structs/IAnimationVertex.h>
#include <Modloader/app/structs/IAnimationVertex__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace IAnimationVertex {
        inline app::IAnimationVertex__Class** type_info() {
            static app::IAnimationVertex__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::IAnimationVertex__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::IAnimationVertex__Class* get_class() {
            return il2cpp::get_class<app::IAnimationVertex__Class>(type_info(), "", "IAnimationVertex");
        }
    } // namespace IAnimationVertex
} // namespace app::classes::types
