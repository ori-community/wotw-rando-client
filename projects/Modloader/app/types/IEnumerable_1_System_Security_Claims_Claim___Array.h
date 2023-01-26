#pragma once
#include <Modloader/app/structs/IEnumerable_1_System_Security_Claims_Claim___Array.h>
#include <Modloader/app/structs/IEnumerable_1_System_Security_Claims_Claim___Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace IEnumerable_1_System_Security_Claims_Claim___Array {
        inline app::IEnumerable_1_System_Security_Claims_Claim___Array__Class** type_info() {
            static app::IEnumerable_1_System_Security_Claims_Claim___Array__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::IEnumerable_1_System_Security_Claims_Claim___Array__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::IEnumerable_1_System_Security_Claims_Claim___Array__Class* get_class() {
            return il2cpp::get_class<app::IEnumerable_1_System_Security_Claims_Claim___Array__Class>(type_info(), "System.Collections.Generic", "IEnumerable`1[System.Security.Claims.Claim][]");
        }
        inline app::IEnumerable_1_System_Security_Claims_Claim___Array* create() {
            return il2cpp::create_object<app::IEnumerable_1_System_Security_Claims_Claim___Array>(get_class());
        }
    } // namespace IEnumerable_1_System_Security_Claims_Claim___Array
} // namespace app::classes::types
