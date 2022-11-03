#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace TypeInformation {
        inline app::TypeInformation__Class** type_info = (app::TypeInformation__Class**)(modloader::win::memory::resolve_rva(0x047404F8));
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
