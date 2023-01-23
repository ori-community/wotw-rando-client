#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/UberPoolPerfTest_SetupAutomatedTest_d_32__Class.h>
#include <Modloader/app/structs/UberPoolPerfTest_SetupAutomatedTest_d_32.h>
#include <Modloader/app/structs/UberPoolPerfTest_SetupAutomatedTest_d_32__Boxed.h>

namespace app::classes::types {
    namespace UberPoolPerfTest_SetupAutomatedTest_d_32 {
        namespace {
            inline app::UberPoolPerfTest_SetupAutomatedTest_d_32__Class* type_info_ref = nullptr;
        }
        inline app::UberPoolPerfTest_SetupAutomatedTest_d_32__Class** type_info = &type_info_ref;
        inline app::UberPoolPerfTest_SetupAutomatedTest_d_32__Class* get_class() {
            return il2cpp::get_nested_class<app::UberPoolPerfTest_SetupAutomatedTest_d_32__Class>(type_info, "", "UberPoolPerfTest", "<SetupAutomatedTest>d__32");
        }
        inline app::UberPoolPerfTest_SetupAutomatedTest_d_32* create() {
            return il2cpp::create_object<app::UberPoolPerfTest_SetupAutomatedTest_d_32>(get_class());
        }
        inline app::UberPoolPerfTest_SetupAutomatedTest_d_32__Boxed* box(app::UberPoolPerfTest_SetupAutomatedTest_d_32 value) {
            return il2cpp::box_value<app::UberPoolPerfTest_SetupAutomatedTest_d_32__Boxed>(get_class(), value);
        }
    } // namespace UberPoolPerfTest_SetupAutomatedTest_d_32
} // namespace app::classes::types
