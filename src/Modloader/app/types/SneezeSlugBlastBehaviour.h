#pragma once
#include <Modloader/app/structs/SneezeSlugBlastBehaviour.h>
#include <Modloader/app/structs/SneezeSlugBlastBehaviour__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace SneezeSlugBlastBehaviour {
        inline app::SneezeSlugBlastBehaviour__Class** type_info() {
            static app::SneezeSlugBlastBehaviour__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::SneezeSlugBlastBehaviour__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::SneezeSlugBlastBehaviour__Class* get_class() {
            return il2cpp::get_class<app::SneezeSlugBlastBehaviour__Class>(type_info(), "", "SneezeSlugBlastBehaviour");
        }
        inline app::SneezeSlugBlastBehaviour* create() {
            return il2cpp::create_object<app::SneezeSlugBlastBehaviour>(get_class());
        }
    } // namespace SneezeSlugBlastBehaviour
} // namespace app::classes::types
