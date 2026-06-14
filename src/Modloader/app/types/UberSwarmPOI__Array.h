#pragma once
#include <Modloader/app/structs/UberSwarmPOI__Array.h>
#include <Modloader/app/structs/UberSwarmPOI__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace UberSwarmPOI__Array {
        inline app::UberSwarmPOI__Array__Class** type_info() {
            static app::UberSwarmPOI__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::UberSwarmPOI__Array__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::UberSwarmPOI__Array__Class* get_class() {
            return il2cpp::get_class<app::UberSwarmPOI__Array__Class>(type_info(), "", "UberSwarmPOI[]");
        }
        inline app::UberSwarmPOI__Array* create() {
            return il2cpp::create_object<app::UberSwarmPOI__Array>(get_class());
        }
    } // namespace UberSwarmPOI__Array
} // namespace app::classes::types
