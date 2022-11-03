#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace MoonAnimation_RootMotionSample {
        namespace {
            inline app::MoonAnimation_RootMotionSample__Class* type_info_ref = nullptr;
        }
        inline app::MoonAnimation_RootMotionSample__Class** type_info = &type_info_ref;
        inline app::MoonAnimation_RootMotionSample__Class* get_class() {
            return il2cpp::get_nested_class<app::MoonAnimation_RootMotionSample__Class>(type_info, "Moon", "MoonAnimation", "RootMotionSample");
        }
        inline app::MoonAnimation_RootMotionSample* create() {
            return il2cpp::create_object<app::MoonAnimation_RootMotionSample>(get_class());
        }
        inline app::MoonAnimation_RootMotionSample__Boxed* box(app::MoonAnimation_RootMotionSample value) {
            return il2cpp::box_value<app::MoonAnimation_RootMotionSample__Boxed>(get_class(), value);
        }
    } // namespace MoonAnimation_RootMotionSample
} // namespace app::classes::types
