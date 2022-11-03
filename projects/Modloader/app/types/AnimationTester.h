#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace AnimationTester {
        namespace {
            inline app::AnimationTester__Class* type_info_ref = nullptr;
        }
        inline app::AnimationTester__Class** type_info = &type_info_ref;
        inline app::AnimationTester__Class* get_class() {
            return il2cpp::get_class<app::AnimationTester__Class>(type_info, "", "AnimationTester");
        }
        inline app::AnimationTester* create() {
            return il2cpp::create_object<app::AnimationTester>(get_class());
        }
    } // namespace AnimationTester
} // namespace app::classes::types
