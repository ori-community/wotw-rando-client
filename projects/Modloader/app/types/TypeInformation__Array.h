#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace TypeInformation__Array {
        namespace {
            inline app::TypeInformation__Array__Class* type_info_ref = nullptr;
        }
        inline app::TypeInformation__Array__Class** type_info = &type_info_ref;
        inline app::TypeInformation__Array__Class* get_class() {
            return il2cpp::get_class<app::TypeInformation__Array__Class>(type_info, "System.Runtime.Serialization.Formatters.Binary", "TypeInformation[]");
        }
        inline app::TypeInformation__Array* create() {
            return il2cpp::create_object<app::TypeInformation__Array>(get_class());
        }
    } // namespace TypeInformation__Array
} // namespace app::classes::types
