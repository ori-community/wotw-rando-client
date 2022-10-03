#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace OffsetEffector_EffectorLink {
        namespace {
            app::OffsetEffector_EffectorLink__Class* type_info_ref = nullptr;
        }
        app::OffsetEffector_EffectorLink__Class** type_info = &type_info_ref;
        inline app::OffsetEffector_EffectorLink__Class* get_class() {
            return il2cpp::get_nested_class<app::OffsetEffector_EffectorLink__Class>(type_info, "RootMotion.Demos", "OffsetEffector", "EffectorLink");
        }
        inline app::OffsetEffector_EffectorLink* create() {
            return il2cpp::create_object<app::OffsetEffector_EffectorLink>(get_class());
        }
        inline app::OffsetEffector_EffectorLink__Array* create_array(int size) {
            return il2cpp::array_new<app::OffsetEffector_EffectorLink__Array>(get_class(), size);
        }
    } // namespace OffsetEffector_EffectorLink
} // namespace app::classes::types
