#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace UberStateToWwiseData_UberStateToWWiseEntry__Array {
        namespace {
            app::UberStateToWwiseData_UberStateToWWiseEntry__Array__Class* type_info_ref = nullptr;
        }
        app::UberStateToWwiseData_UberStateToWWiseEntry__Array__Class** type_info = &type_info_ref;
        inline app::UberStateToWwiseData_UberStateToWWiseEntry__Array__Class* get_class() {
            return il2cpp::get_class<app::UberStateToWwiseData_UberStateToWWiseEntry__Array__Class>(type_info, "Moon.Wwise", "UberStateToWwiseData+UberStateToWWiseEntry[]");
        }
        inline app::UberStateToWwiseData_UberStateToWWiseEntry__Array* create() {
            return il2cpp::create_object<app::UberStateToWwiseData_UberStateToWWiseEntry__Array>(get_class());
        }
    } // namespace UberStateToWwiseData_UberStateToWWiseEntry__Array
} // namespace app::classes::types
