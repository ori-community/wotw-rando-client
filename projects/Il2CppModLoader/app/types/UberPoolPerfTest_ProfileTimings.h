#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace UberPoolPerfTest_ProfileTimings {
        namespace {
            app::UberPoolPerfTest_ProfileTimings__Class* type_info_ref = nullptr;
        }
        app::UberPoolPerfTest_ProfileTimings__Class** type_info = &type_info_ref;
        inline app::UberPoolPerfTest_ProfileTimings__Class* get_class() {
            return il2cpp::get_nested_class<app::UberPoolPerfTest_ProfileTimings__Class>(type_info, "", "UberPoolPerfTest", "ProfileTimings");
        }
        inline app::UberPoolPerfTest_ProfileTimings* create() {
            return il2cpp::create_object<app::UberPoolPerfTest_ProfileTimings>(get_class());
        }
        inline app::UberPoolPerfTest_ProfileTimings__Boxed* box(app::UberPoolPerfTest_ProfileTimings value) {
            return il2cpp::box_value<app::UberPoolPerfTest_ProfileTimings__Boxed>(get_class(), value);
        }
    } // namespace UberPoolPerfTest_ProfileTimings
} // namespace app::classes::types
