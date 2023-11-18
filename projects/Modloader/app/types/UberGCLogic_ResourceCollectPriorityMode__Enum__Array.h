#pragma once
#include <Modloader/app/structs/UberGCLogic_ResourceCollectPriorityMode__Enum__Array.h>
#include <Modloader/app/structs/UberGCLogic_ResourceCollectPriorityMode__Enum__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace UberGCLogic_ResourceCollectPriorityMode__Enum__Array {
        inline app::UberGCLogic_ResourceCollectPriorityMode__Enum__Array__Class** type_info() {
            static app::UberGCLogic_ResourceCollectPriorityMode__Enum__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::UberGCLogic_ResourceCollectPriorityMode__Enum__Array__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::UberGCLogic_ResourceCollectPriorityMode__Enum__Array__Class* get_class() {
            return il2cpp::get_class<app::UberGCLogic_ResourceCollectPriorityMode__Enum__Array__Class>(type_info(), "UberShader.optimizations.gc", "UberGCLogic+ResourceCollectPriorityMode[]");
        }
        inline app::UberGCLogic_ResourceCollectPriorityMode__Enum__Array* create() {
            return il2cpp::create_object<app::UberGCLogic_ResourceCollectPriorityMode__Enum__Array>(get_class());
        }
    } // namespace UberGCLogic_ResourceCollectPriorityMode__Enum__Array
} // namespace app::classes::types
