#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace UberPoolPerfTest_ForcePrefabPrewarmed_d_36 {
        namespace {
            inline app::UberPoolPerfTest_ForcePrefabPrewarmed_d_36__Class* type_info_ref = nullptr;
        }
        inline app::UberPoolPerfTest_ForcePrefabPrewarmed_d_36__Class** type_info = &type_info_ref;
        inline app::UberPoolPerfTest_ForcePrefabPrewarmed_d_36__Class* get_class() {
            return il2cpp::get_nested_class<app::UberPoolPerfTest_ForcePrefabPrewarmed_d_36__Class>(type_info, "", "UberPoolPerfTest", "<ForcePrefabPrewarmed>d__36");
        }
        inline app::UberPoolPerfTest_ForcePrefabPrewarmed_d_36* create() {
            return il2cpp::create_object<app::UberPoolPerfTest_ForcePrefabPrewarmed_d_36>(get_class());
        }
        inline app::UberPoolPerfTest_ForcePrefabPrewarmed_d_36__Boxed* box(app::UberPoolPerfTest_ForcePrefabPrewarmed_d_36 value) {
            return il2cpp::box_value<app::UberPoolPerfTest_ForcePrefabPrewarmed_d_36__Boxed>(get_class(), value);
        }
    } // namespace UberPoolPerfTest_ForcePrefabPrewarmed_d_36
} // namespace app::classes::types
