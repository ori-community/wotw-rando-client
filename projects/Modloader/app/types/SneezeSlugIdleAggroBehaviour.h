#pragma once
#include <Modloader/app/structs/SneezeSlugIdleAggroBehaviour.h>
#include <Modloader/app/structs/SneezeSlugIdleAggroBehaviour__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace SneezeSlugIdleAggroBehaviour {
        inline app::SneezeSlugIdleAggroBehaviour__Class** type_info() {
            static app::SneezeSlugIdleAggroBehaviour__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::SneezeSlugIdleAggroBehaviour__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::SneezeSlugIdleAggroBehaviour__Class* get_class() {
            return il2cpp::get_class<app::SneezeSlugIdleAggroBehaviour__Class>(type_info(), "", "SneezeSlugIdleAggroBehaviour");
        }
        inline app::SneezeSlugIdleAggroBehaviour* create() {
            return il2cpp::create_object<app::SneezeSlugIdleAggroBehaviour>(get_class());
        }
    } // namespace SneezeSlugIdleAggroBehaviour
} // namespace app::classes::types
