#pragma once
#include <Modloader/app/structs/ReliabilityContractAttribute.h>
#include <Modloader/app/structs/ReliabilityContractAttribute__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ReliabilityContractAttribute {
        inline app::ReliabilityContractAttribute__Class** type_info() {
            static app::ReliabilityContractAttribute__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::ReliabilityContractAttribute__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::ReliabilityContractAttribute__Class* get_class() {
            return il2cpp::get_class<app::ReliabilityContractAttribute__Class>(type_info(), "System.Runtime.ConstrainedExecution", "ReliabilityContractAttribute");
        }
        inline app::ReliabilityContractAttribute* create() {
            return il2cpp::create_object<app::ReliabilityContractAttribute>(get_class());
        }
    } // namespace ReliabilityContractAttribute
} // namespace app::classes::types
