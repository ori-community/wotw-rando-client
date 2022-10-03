#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace UberPoolPerfTest_LoadPoolPrewarmScene_d_42 {
        namespace {
            app::UberPoolPerfTest_LoadPoolPrewarmScene_d_42__Class* type_info_ref = nullptr;
        }
        app::UberPoolPerfTest_LoadPoolPrewarmScene_d_42__Class** type_info = &type_info_ref;
        inline app::UberPoolPerfTest_LoadPoolPrewarmScene_d_42__Class* get_class() {
            return il2cpp::get_nested_class<app::UberPoolPerfTest_LoadPoolPrewarmScene_d_42__Class>(type_info, "", "UberPoolPerfTest", "<LoadPoolPrewarmScene>d__42");
        }
        inline app::UberPoolPerfTest_LoadPoolPrewarmScene_d_42* create() {
            return il2cpp::create_object<app::UberPoolPerfTest_LoadPoolPrewarmScene_d_42>(get_class());
        }
        inline app::UberPoolPerfTest_LoadPoolPrewarmScene_d_42__Boxed* box(app::UberPoolPerfTest_LoadPoolPrewarmScene_d_42 value) {
            return il2cpp::box_value<app::UberPoolPerfTest_LoadPoolPrewarmScene_d_42__Boxed>(get_class(), value);
        }
    } // namespace UberPoolPerfTest_LoadPoolPrewarmScene_d_42
} // namespace app::classes::types
