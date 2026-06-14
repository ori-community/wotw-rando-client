#pragma once
#include <Modloader/app/structs/AdditiveAnimSet.h>
#include <Modloader/app/structs/AdditiveAnimSet__Boxed.h>
#include <Modloader/app/structs/AdditiveAnimSet__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace AdditiveAnimSet {
        inline app::AdditiveAnimSet__Class** type_info() {
            static app::AdditiveAnimSet__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::AdditiveAnimSet__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::AdditiveAnimSet__Class* get_class() {
            return il2cpp::get_class<app::AdditiveAnimSet__Class>(type_info(), "", "AdditiveAnimSet");
        }
        inline app::AdditiveAnimSet* create() {
            return il2cpp::create_object<app::AdditiveAnimSet>(get_class());
        }
        inline app::AdditiveAnimSet__Boxed* box(app::AdditiveAnimSet value) {
            return il2cpp::box_value<app::AdditiveAnimSet__Boxed>(get_class(), value);
        }
    } // namespace AdditiveAnimSet
} // namespace app::classes::types
