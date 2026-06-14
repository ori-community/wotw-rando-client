#pragma once
#include <Modloader/app/structs/UberWaterEdge__Array.h>
#include <Modloader/app/structs/UberWaterEdge__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace UberWaterEdge__Array {
        inline app::UberWaterEdge__Array__Class** type_info() {
            static app::UberWaterEdge__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::UberWaterEdge__Array__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::UberWaterEdge__Array__Class* get_class() {
            return il2cpp::get_class<app::UberWaterEdge__Array__Class>(type_info(), "", "UberWaterEdge[]");
        }
        inline app::UberWaterEdge__Array* create() {
            return il2cpp::create_object<app::UberWaterEdge__Array>(get_class());
        }
    } // namespace UberWaterEdge__Array
} // namespace app::classes::types
