#pragma once
#include <Modloader/app/structs/CheckpointFunctionality.h>
#include <Modloader/app/structs/CheckpointFunctionality__Boxed.h>
#include <Modloader/app/structs/CheckpointFunctionality__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace CheckpointFunctionality {
        inline app::CheckpointFunctionality__Class** type_info() {
            static app::CheckpointFunctionality__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::CheckpointFunctionality__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::CheckpointFunctionality__Class* get_class() {
            return il2cpp::get_class<app::CheckpointFunctionality__Class>(type_info(), "", "CheckpointFunctionality");
        }
        inline app::CheckpointFunctionality* create() {
            return il2cpp::create_object<app::CheckpointFunctionality>(get_class());
        }
        inline app::CheckpointFunctionality__Boxed* box(app::CheckpointFunctionality value) {
            return il2cpp::box_value<app::CheckpointFunctionality__Boxed>(get_class(), value);
        }
    } // namespace CheckpointFunctionality
} // namespace app::classes::types
