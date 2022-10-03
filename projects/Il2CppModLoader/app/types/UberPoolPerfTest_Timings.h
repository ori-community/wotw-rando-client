#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace UberPoolPerfTest_Timings {
        namespace {
            app::UberPoolPerfTest_Timings__Class* type_info_ref = nullptr;
        }
        app::UberPoolPerfTest_Timings__Class** type_info = &type_info_ref;
        inline app::UberPoolPerfTest_Timings__Class* get_class() {
            return il2cpp::get_nested_class<app::UberPoolPerfTest_Timings__Class>(type_info, "", "UberPoolPerfTest", "Timings");
        }
        inline app::UberPoolPerfTest_Timings* create() {
            return il2cpp::create_object<app::UberPoolPerfTest_Timings>(get_class());
        }
        inline app::UberPoolPerfTest_Timings__Boxed* box(app::UberPoolPerfTest_Timings value) {
            return il2cpp::box_value<app::UberPoolPerfTest_Timings__Boxed>(get_class(), value);
        }
    } // namespace UberPoolPerfTest_Timings
} // namespace app::classes::types
