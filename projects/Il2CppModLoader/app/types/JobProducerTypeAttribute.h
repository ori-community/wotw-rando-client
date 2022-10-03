#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace JobProducerTypeAttribute {
        namespace {
            app::JobProducerTypeAttribute__Class* type_info_ref = nullptr;
        }
        app::JobProducerTypeAttribute__Class** type_info = &type_info_ref;
        inline app::JobProducerTypeAttribute__Class* get_class() {
            return il2cpp::get_class<app::JobProducerTypeAttribute__Class>(type_info, "Unity.Jobs.LowLevel.Unsafe", "JobProducerTypeAttribute");
        }
        inline app::JobProducerTypeAttribute* create() {
            return il2cpp::create_object<app::JobProducerTypeAttribute>(get_class());
        }
    } // namespace JobProducerTypeAttribute
} // namespace app::classes::types
