#pragma once
#include <Modloader/app/structs/SnapTrapEntity_SnapTrapParameters.h>
#include <Modloader/app/structs/SnapTrapEntity_SnapTrapParameters__Boxed.h>
#include <Modloader/app/structs/SnapTrapEntity_SnapTrapParameters__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace SnapTrapEntity_SnapTrapParameters {
        inline app::SnapTrapEntity_SnapTrapParameters__Class** type_info() {
            static app::SnapTrapEntity_SnapTrapParameters__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::SnapTrapEntity_SnapTrapParameters__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::SnapTrapEntity_SnapTrapParameters__Class* get_class() {
            return il2cpp::get_nested_class<app::SnapTrapEntity_SnapTrapParameters__Class>(type_info(), "", "SnapTrapEntity", "SnapTrapParameters");
        }
        inline app::SnapTrapEntity_SnapTrapParameters* create() {
            return il2cpp::create_object<app::SnapTrapEntity_SnapTrapParameters>(get_class());
        }
        inline app::SnapTrapEntity_SnapTrapParameters__Boxed* box(app::SnapTrapEntity_SnapTrapParameters value) {
            return il2cpp::box_value<app::SnapTrapEntity_SnapTrapParameters__Boxed>(get_class(), value);
        }
    } // namespace SnapTrapEntity_SnapTrapParameters
} // namespace app::classes::types
