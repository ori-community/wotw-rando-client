#pragma once
#include <Modloader/app/structs/JobProducerTypeAttribute.h>
#include <Modloader/app/structs/JobProducerTypeAttribute__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace JobProducerTypeAttribute {
        inline app::JobProducerTypeAttribute__Class** type_info() {
            static app::JobProducerTypeAttribute__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::JobProducerTypeAttribute__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::JobProducerTypeAttribute__Class* get_class() {
            return il2cpp::get_class<app::JobProducerTypeAttribute__Class>(type_info(), "Unity.Jobs.LowLevel.Unsafe", "JobProducerTypeAttribute");
        }
        inline app::JobProducerTypeAttribute* create() {
            return il2cpp::create_object<app::JobProducerTypeAttribute>(get_class());
        }
    } // namespace JobProducerTypeAttribute
} // namespace app::classes::types
