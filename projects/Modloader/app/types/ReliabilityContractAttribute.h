#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace ReliabilityContractAttribute {
        namespace {
            inline app::ReliabilityContractAttribute__Class* type_info_ref = nullptr;
        }
        inline app::ReliabilityContractAttribute__Class** type_info = &type_info_ref;
        inline app::ReliabilityContractAttribute__Class* get_class() {
            return il2cpp::get_class<app::ReliabilityContractAttribute__Class>(type_info, "System.Runtime.ConstrainedExecution", "ReliabilityContractAttribute");
        }
        inline app::ReliabilityContractAttribute* create() {
            return il2cpp::create_object<app::ReliabilityContractAttribute>(get_class());
        }
    } // namespace ReliabilityContractAttribute
} // namespace app::classes::types
