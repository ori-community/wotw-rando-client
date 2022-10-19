#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace UberWaterControl_ImpactBuf {
        namespace {
            inline app::UberWaterControl_ImpactBuf__Class* type_info_ref = nullptr;
        }
        inline app::UberWaterControl_ImpactBuf__Class** type_info = &type_info_ref;
        inline app::UberWaterControl_ImpactBuf__Class* get_class() {
            return il2cpp::get_nested_class<app::UberWaterControl_ImpactBuf__Class>(type_info, "", "UberWaterControl", "ImpactBuf");
        }
        inline app::UberWaterControl_ImpactBuf* create() {
            return il2cpp::create_object<app::UberWaterControl_ImpactBuf>(get_class());
        }
        inline app::UberWaterControl_ImpactBuf__Boxed* box(app::UberWaterControl_ImpactBuf value) {
            return il2cpp::box_value<app::UberWaterControl_ImpactBuf__Boxed>(get_class(), value);
        }
        inline app::UberWaterControl_ImpactBuf__Array* create_array(int size) {
            return il2cpp::array_new<app::UberWaterControl_ImpactBuf__Array>(get_class(), size);
        }
        inline app::UberWaterControl_ImpactBuf__Array* create_array(const std::vector<app::UberWaterControl_ImpactBuf>& items) {
            return il2cpp::array_new<app::UberWaterControl_ImpactBuf__Array>(get_class(), items);
        }
    } // namespace UberWaterControl_ImpactBuf
} // namespace app::classes::types
