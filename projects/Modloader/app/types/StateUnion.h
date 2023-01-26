#pragma once
#include <Modloader/app/structs/StateUnion.h>
#include <Modloader/app/structs/StateUnion__Boxed.h>
#include <Modloader/app/structs/StateUnion__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace StateUnion {
        inline app::StateUnion__Class** type_info() {
            static app::StateUnion__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::StateUnion__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::StateUnion__Class* get_class() {
            return il2cpp::get_class<app::StateUnion__Class>(type_info(), "System.Xml.Schema", "StateUnion");
        }
        inline app::StateUnion* create() {
            return il2cpp::create_object<app::StateUnion>(get_class());
        }
        inline app::StateUnion__Boxed* box(app::StateUnion value) {
            return il2cpp::box_value<app::StateUnion__Boxed>(get_class(), value);
        }
    } // namespace StateUnion
} // namespace app::classes::types
