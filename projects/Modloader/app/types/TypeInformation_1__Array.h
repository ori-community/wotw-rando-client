#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace TypeInformation_1__Array {
        inline app::TypeInformation_1__Array__Class** type_info = (app::TypeInformation_1__Array__Class**)(modloader::win::memory::resolve_rva(0x0476FE78));
        inline app::TypeInformation_1__Array__Class* get_class() {
            return il2cpp::get_class<app::TypeInformation_1__Array__Class>(type_info, "Newtonsoft.Json.Utilities", "TypeInformation[]");
        }
        inline app::TypeInformation_1__Array* create() {
            return il2cpp::create_object<app::TypeInformation_1__Array>(get_class());
        }
    } // namespace TypeInformation_1__Array
} // namespace app::classes::types
