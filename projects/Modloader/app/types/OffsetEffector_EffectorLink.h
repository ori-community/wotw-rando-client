#pragma once
#include <Modloader/app/structs/OffsetEffector_EffectorLink.h>
#include <Modloader/app/structs/OffsetEffector_EffectorLink__Array.h>
#include <Modloader/app/structs/OffsetEffector_EffectorLink__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace OffsetEffector_EffectorLink {
        inline app::OffsetEffector_EffectorLink__Class** type_info() {
            static app::OffsetEffector_EffectorLink__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::OffsetEffector_EffectorLink__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::OffsetEffector_EffectorLink__Class* get_class() {
            return il2cpp::get_nested_class<app::OffsetEffector_EffectorLink__Class>(type_info(), "RootMotion.Demos", "OffsetEffector", "EffectorLink");
        }
        inline app::OffsetEffector_EffectorLink* create() {
            return il2cpp::create_object<app::OffsetEffector_EffectorLink>(get_class());
        }
        inline app::OffsetEffector_EffectorLink__Array* create_array(int size) {
            return il2cpp::array_new<app::OffsetEffector_EffectorLink__Array>(get_class(), size);
        }
        inline app::OffsetEffector_EffectorLink__Array* create_array(const std::vector<app::OffsetEffector_EffectorLink*>& items) {
            return il2cpp::array_new<app::OffsetEffector_EffectorLink__Array>(get_class(), items);
        }
    } // namespace OffsetEffector_EffectorLink
} // namespace app::classes::types
