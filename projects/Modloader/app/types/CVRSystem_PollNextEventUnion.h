#pragma once
#include <Modloader/app/structs/CVRSystem_PollNextEventUnion.h>
#include <Modloader/app/structs/CVRSystem_PollNextEventUnion__Boxed.h>
#include <Modloader/app/structs/CVRSystem_PollNextEventUnion__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace CVRSystem_PollNextEventUnion {
        inline app::CVRSystem_PollNextEventUnion__Class** type_info() {
            static app::CVRSystem_PollNextEventUnion__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::CVRSystem_PollNextEventUnion__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::CVRSystem_PollNextEventUnion__Class* get_class() {
            return il2cpp::get_nested_class<app::CVRSystem_PollNextEventUnion__Class>(type_info(), "ZenFulcrum.VR.OpenVRBinding", "CVRSystem", "PollNextEventUnion");
        }
        inline app::CVRSystem_PollNextEventUnion* create() {
            return il2cpp::create_object<app::CVRSystem_PollNextEventUnion>(get_class());
        }
        inline app::CVRSystem_PollNextEventUnion__Boxed* box(app::CVRSystem_PollNextEventUnion value) {
            return il2cpp::box_value<app::CVRSystem_PollNextEventUnion__Boxed>(get_class(), value);
        }
    } // namespace CVRSystem_PollNextEventUnion
} // namespace app::classes::types
