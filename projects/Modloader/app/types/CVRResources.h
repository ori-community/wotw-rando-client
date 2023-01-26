#pragma once
#include <Modloader/app/structs/CVRResources.h>
#include <Modloader/app/structs/CVRResources__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace CVRResources {
        inline app::CVRResources__Class** type_info() {
            static app::CVRResources__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::CVRResources__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::CVRResources__Class* get_class() {
            return il2cpp::get_class<app::CVRResources__Class>(type_info(), "ZenFulcrum.VR.OpenVRBinding", "CVRResources");
        }
        inline app::CVRResources* create() {
            return il2cpp::create_object<app::CVRResources>(get_class());
        }
    } // namespace CVRResources
} // namespace app::classes::types
