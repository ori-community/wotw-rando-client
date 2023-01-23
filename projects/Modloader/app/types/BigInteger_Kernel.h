#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/BigInteger_Kernel__Class.h>
#include <Modloader/app/structs/BigInteger_Kernel.h>

namespace app::classes::types {
    namespace BigInteger_Kernel {
        namespace {
            inline app::BigInteger_Kernel__Class* type_info_ref = nullptr;
        }
        inline app::BigInteger_Kernel__Class** type_info = &type_info_ref;
        inline app::BigInteger_Kernel__Class* get_class() {
            return il2cpp::get_nested_class<app::BigInteger_Kernel__Class>(type_info, "Mono.Math", "BigInteger", "Kernel");
        }
        inline app::BigInteger_Kernel* create() {
            return il2cpp::create_object<app::BigInteger_Kernel>(get_class());
        }
    } // namespace BigInteger_Kernel
} // namespace app::classes::types
