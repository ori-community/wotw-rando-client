#pragma once
#include <Modloader/app/structs/UberPoolPerfTest_LoadPoolPrewarmScene_d_42.h>
#include <Modloader/app/structs/UberPoolPerfTest_LoadPoolPrewarmScene_d_42__Boxed.h>
#include <Modloader/app/structs/UberPoolPerfTest_LoadPoolPrewarmScene_d_42__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace UberPoolPerfTest_LoadPoolPrewarmScene_d_42 {
        inline app::UberPoolPerfTest_LoadPoolPrewarmScene_d_42__Class** type_info() {
            static app::UberPoolPerfTest_LoadPoolPrewarmScene_d_42__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::UberPoolPerfTest_LoadPoolPrewarmScene_d_42__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::UberPoolPerfTest_LoadPoolPrewarmScene_d_42__Class* get_class() {
            return il2cpp::get_nested_class<app::UberPoolPerfTest_LoadPoolPrewarmScene_d_42__Class>(type_info(), "", "UberPoolPerfTest", "<LoadPoolPrewarmScene>d__42");
        }
        inline app::UberPoolPerfTest_LoadPoolPrewarmScene_d_42* create() {
            return il2cpp::create_object<app::UberPoolPerfTest_LoadPoolPrewarmScene_d_42>(get_class());
        }
        inline app::UberPoolPerfTest_LoadPoolPrewarmScene_d_42__Boxed* box(app::UberPoolPerfTest_LoadPoolPrewarmScene_d_42 value) {
            return il2cpp::box_value<app::UberPoolPerfTest_LoadPoolPrewarmScene_d_42__Boxed>(get_class(), value);
        }
    } // namespace UberPoolPerfTest_LoadPoolPrewarmScene_d_42
} // namespace app::classes::types
