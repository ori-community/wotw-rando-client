#pragma once
#include <Modloader/app/structs/ComputeNewPlayerCompatibilityResult_t.h>
#include <Modloader/app/structs/ComputeNewPlayerCompatibilityResult_t__Boxed.h>
#include <Modloader/app/structs/ComputeNewPlayerCompatibilityResult_t__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ComputeNewPlayerCompatibilityResult_t {
        inline app::ComputeNewPlayerCompatibilityResult_t__Class** type_info() {
            static app::ComputeNewPlayerCompatibilityResult_t__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::ComputeNewPlayerCompatibilityResult_t__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::ComputeNewPlayerCompatibilityResult_t__Class* get_class() {
            return il2cpp::get_class<app::ComputeNewPlayerCompatibilityResult_t__Class>(type_info(), "Steamworks", "ComputeNewPlayerCompatibilityResult_t");
        }
        inline app::ComputeNewPlayerCompatibilityResult_t* create() {
            return il2cpp::create_object<app::ComputeNewPlayerCompatibilityResult_t>(get_class());
        }
        inline app::ComputeNewPlayerCompatibilityResult_t__Boxed* box(app::ComputeNewPlayerCompatibilityResult_t value) {
            return il2cpp::box_value<app::ComputeNewPlayerCompatibilityResult_t__Boxed>(get_class(), value);
        }
    } // namespace ComputeNewPlayerCompatibilityResult_t
} // namespace app::classes::types
