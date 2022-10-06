#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace FOVConversionReport_Issue {
        namespace {
            app::FOVConversionReport_Issue__Class* type_info_ref = nullptr;
        }
        app::FOVConversionReport_Issue__Class** type_info = &type_info_ref;
        inline app::FOVConversionReport_Issue__Class* get_class() {
            return il2cpp::get_nested_class<app::FOVConversionReport_Issue__Class>(type_info, "Moon.EditorTools", "FOVConversionReport", "Issue");
        }
        inline app::FOVConversionReport_Issue* create() {
            return il2cpp::create_object<app::FOVConversionReport_Issue>(get_class());
        }
        inline app::FOVConversionReport_Issue__Array* create_array(int size) {
            return il2cpp::array_new<app::FOVConversionReport_Issue__Array>(get_class(), size);
        }
        inline app::FOVConversionReport_Issue__Array* create_array(const std::vector<app::FOVConversionReport_Issue*>& items) {
            return il2cpp::array_new<app::FOVConversionReport_Issue__Array>(get_class(), items);
        }
    } // namespace FOVConversionReport_Issue
} // namespace app::classes::types
