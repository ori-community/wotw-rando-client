#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace IVirtualTimelineGameObject__Array {
        namespace {
            app::IVirtualTimelineGameObject__Array__Class* type_info_ref = nullptr;
        }
        app::IVirtualTimelineGameObject__Array__Class** type_info = &type_info_ref;
        inline app::IVirtualTimelineGameObject__Array__Class* get_class() {
            return il2cpp::get_class<app::IVirtualTimelineGameObject__Array__Class>(type_info, "", "IVirtualTimelineGameObject[]");
        }
        inline app::IVirtualTimelineGameObject__Array* create() {
            return il2cpp::create_object<app::IVirtualTimelineGameObject__Array>(get_class());
        }
    } // namespace IVirtualTimelineGameObject__Array
} // namespace app::classes::types
