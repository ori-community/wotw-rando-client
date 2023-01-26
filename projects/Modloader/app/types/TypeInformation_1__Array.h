#pragma once
#include <Modloader/app/structs/TypeInformation_1__Array.h>
#include <Modloader/app/structs/TypeInformation_1__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace TypeInformation_1__Array {
        inline app::TypeInformation_1__Array__Class** type_info() {
            static app::TypeInformation_1__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::TypeInformation_1__Array__Class**)(modloader::win::memory::resolve_rva(0x0476FE78));
            }
            return cache;
        }
        inline app::TypeInformation_1__Array__Class* get_class() {
            return il2cpp::get_class<app::TypeInformation_1__Array__Class>(type_info(), "Newtonsoft.Json.Utilities", "TypeInformation[]");
        }
        inline app::TypeInformation_1__Array* create() {
            return il2cpp::create_object<app::TypeInformation_1__Array>(get_class());
        }
    } // namespace TypeInformation_1__Array
} // namespace app::classes::types
