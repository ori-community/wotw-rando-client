#pragma once
#include <Modloader/app/structs/UberGCLogic_ResourceCollectPriorityMode__Enum.h>
#include <Modloader/app/structs/UberGCLogic_ResourceCollectPriorityMode__Enum__Array.h>
#include <Modloader/app/structs/UberGCLogic_ResourceCollectPriorityMode__Enum__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace UberGCLogic_ResourceCollectPriorityMode__Enum {
        inline app::UberGCLogic_ResourceCollectPriorityMode__Enum__Class** type_info() {
            static app::UberGCLogic_ResourceCollectPriorityMode__Enum__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::UberGCLogic_ResourceCollectPriorityMode__Enum__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::UberGCLogic_ResourceCollectPriorityMode__Enum__Class* get_class() {
            return il2cpp::get_nested_class<app::UberGCLogic_ResourceCollectPriorityMode__Enum__Class>(type_info(), "UberShader.optimizations.gc", "UberGCLogic", "ResourceCollectPriorityMode");
        }
        inline app::UberGCLogic_ResourceCollectPriorityMode__Enum* create() {
            return il2cpp::create_object<app::UberGCLogic_ResourceCollectPriorityMode__Enum>(get_class());
        }
        inline app::UberGCLogic_ResourceCollectPriorityMode__Enum__Array* create_array(int size) {
            return il2cpp::array_new<app::UberGCLogic_ResourceCollectPriorityMode__Enum__Array>(get_class(), size);
        }
        inline app::UberGCLogic_ResourceCollectPriorityMode__Enum__Array* create_array(const std::vector<app::UberGCLogic_ResourceCollectPriorityMode__Enum*>& items) {
            return il2cpp::array_new<app::UberGCLogic_ResourceCollectPriorityMode__Enum__Array>(get_class(), items);
        }
    } // namespace UberGCLogic_ResourceCollectPriorityMode__Enum
} // namespace app::classes::types
