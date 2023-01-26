#pragma once
#include <Modloader/app/structs/TypeInformation__Array.h>
#include <Modloader/app/structs/TypeInformation__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace TypeInformation__Array {
        inline app::TypeInformation__Array__Class** type_info() {
            static app::TypeInformation__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::TypeInformation__Array__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::TypeInformation__Array__Class* get_class() {
            return il2cpp::get_class<app::TypeInformation__Array__Class>(type_info(), "System.Runtime.Serialization.Formatters.Binary", "TypeInformation[]");
        }
        inline app::TypeInformation__Array* create() {
            return il2cpp::create_object<app::TypeInformation__Array>(get_class());
        }
    } // namespace TypeInformation__Array
} // namespace app::classes::types
