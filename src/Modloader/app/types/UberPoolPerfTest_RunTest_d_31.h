#pragma once
#include <Modloader/app/structs/UberPoolPerfTest_RunTest_d_31.h>
#include <Modloader/app/structs/UberPoolPerfTest_RunTest_d_31__Boxed.h>
#include <Modloader/app/structs/UberPoolPerfTest_RunTest_d_31__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace UberPoolPerfTest_RunTest_d_31 {
        inline app::UberPoolPerfTest_RunTest_d_31__Class** type_info() {
            static app::UberPoolPerfTest_RunTest_d_31__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::UberPoolPerfTest_RunTest_d_31__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::UberPoolPerfTest_RunTest_d_31__Class* get_class() {
            return il2cpp::get_nested_class<app::UberPoolPerfTest_RunTest_d_31__Class>(type_info(), "", "UberPoolPerfTest", "<RunTest>d__31");
        }
        inline app::UberPoolPerfTest_RunTest_d_31* create() {
            return il2cpp::create_object<app::UberPoolPerfTest_RunTest_d_31>(get_class());
        }
        inline app::UberPoolPerfTest_RunTest_d_31__Boxed* box(app::UberPoolPerfTest_RunTest_d_31 value) {
            return il2cpp::box_value<app::UberPoolPerfTest_RunTest_d_31__Boxed>(get_class(), value);
        }
    } // namespace UberPoolPerfTest_RunTest_d_31
} // namespace app::classes::types
