#pragma once
#include <Modloader/app/structs/UberPoolPerfTest_ForcePrefabPrewarmed_d_36.h>
#include <Modloader/app/structs/UberPoolPerfTest_ForcePrefabPrewarmed_d_36__Boxed.h>
#include <Modloader/app/structs/UberPoolPerfTest_ForcePrefabPrewarmed_d_36__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace UberPoolPerfTest_ForcePrefabPrewarmed_d_36 {
        inline app::UberPoolPerfTest_ForcePrefabPrewarmed_d_36__Class** type_info() {
            static app::UberPoolPerfTest_ForcePrefabPrewarmed_d_36__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::UberPoolPerfTest_ForcePrefabPrewarmed_d_36__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::UberPoolPerfTest_ForcePrefabPrewarmed_d_36__Class* get_class() {
            return il2cpp::get_nested_class<app::UberPoolPerfTest_ForcePrefabPrewarmed_d_36__Class>(type_info(), "", "UberPoolPerfTest", "<ForcePrefabPrewarmed>d__36");
        }
        inline app::UberPoolPerfTest_ForcePrefabPrewarmed_d_36* create() {
            return il2cpp::create_object<app::UberPoolPerfTest_ForcePrefabPrewarmed_d_36>(get_class());
        }
        inline app::UberPoolPerfTest_ForcePrefabPrewarmed_d_36__Boxed* box(app::UberPoolPerfTest_ForcePrefabPrewarmed_d_36 value) {
            return il2cpp::box_value<app::UberPoolPerfTest_ForcePrefabPrewarmed_d_36__Boxed>(get_class(), value);
        }
    } // namespace UberPoolPerfTest_ForcePrefabPrewarmed_d_36
} // namespace app::classes::types
