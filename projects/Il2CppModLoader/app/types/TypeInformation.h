#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace TypeInformation {
        extern IL2CPP_MODLOADER_DLLEXPORT app::TypeInformation__Class** type_info;
        inline app::TypeInformation__Class* get_class() {
            return il2cpp::get_class<app::TypeInformation__Class>(type_info, "System.Runtime.Serialization.Formatters.Binary", "TypeInformation");
        }
        inline app::TypeInformation* create() {
            return il2cpp::create_object<app::TypeInformation>(get_class());
        }
        inline app::TypeInformation__Array* create_array(int size) {
            return il2cpp::array_new<app::TypeInformation__Array>(get_class(), size);
        }
        inline app::TypeInformation__Array* create_array(const std::vector<app::TypeInformation*>& items) {
            return il2cpp::array_new<app::TypeInformation__Array>(get_class(), items);
        }
    } // namespace TypeInformation
} // namespace app::classes::types
