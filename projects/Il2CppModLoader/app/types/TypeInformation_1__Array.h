#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace TypeInformation_1__Array {
        extern IL2CPP_MODLOADER_DLLEXPORT app::TypeInformation_1__Array__Class** type_info;
        inline app::TypeInformation_1__Array__Class* get_class() {
            return il2cpp::get_class<app::TypeInformation_1__Array__Class>(type_info, "Newtonsoft.Json.Utilities", "TypeInformation[]");
        }
        inline app::TypeInformation_1__Array* create() {
            return il2cpp::create_object<app::TypeInformation_1__Array>(get_class());
        }
    } // namespace TypeInformation_1__Array
} // namespace app::classes::types
