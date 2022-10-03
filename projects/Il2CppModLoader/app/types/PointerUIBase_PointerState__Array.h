#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace PointerUIBase_PointerState__Array {
        namespace {
            app::PointerUIBase_PointerState__Array__Class* type_info_ref = nullptr;
        }
        app::PointerUIBase_PointerState__Array__Class** type_info = &type_info_ref;
        inline app::PointerUIBase_PointerState__Array__Class* get_class() {
            return il2cpp::get_class<app::PointerUIBase_PointerState__Array__Class>(type_info, "ZenFulcrum.EmbeddedBrowser", "PointerUIBase+PointerState[]");
        }
        inline app::PointerUIBase_PointerState__Array* create() {
            return il2cpp::create_object<app::PointerUIBase_PointerState__Array>(get_class());
        }
    } // namespace PointerUIBase_PointerState__Array
} // namespace app::classes::types
