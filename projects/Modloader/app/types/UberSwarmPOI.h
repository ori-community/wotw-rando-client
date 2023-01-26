#pragma once
#include <Modloader/app/structs/UberSwarmPOI.h>
#include <Modloader/app/structs/UberSwarmPOI__Array.h>
#include <Modloader/app/structs/UberSwarmPOI__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace UberSwarmPOI {
        inline app::UberSwarmPOI__Class** type_info() {
            static app::UberSwarmPOI__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::UberSwarmPOI__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::UberSwarmPOI__Class* get_class() {
            return il2cpp::get_class<app::UberSwarmPOI__Class>(type_info(), "", "UberSwarmPOI");
        }
        inline app::UberSwarmPOI* create() {
            return il2cpp::create_object<app::UberSwarmPOI>(get_class());
        }
        inline app::UberSwarmPOI__Array* create_array(int size) {
            return il2cpp::array_new<app::UberSwarmPOI__Array>(get_class(), size);
        }
        inline app::UberSwarmPOI__Array* create_array(const std::vector<app::UberSwarmPOI*>& items) {
            return il2cpp::array_new<app::UberSwarmPOI__Array>(get_class(), items);
        }
    } // namespace UberSwarmPOI
} // namespace app::classes::types
