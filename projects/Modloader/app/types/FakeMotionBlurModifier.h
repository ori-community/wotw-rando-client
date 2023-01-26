#pragma once
#include <Modloader/app/structs/FakeMotionBlurModifier.h>
#include <Modloader/app/structs/FakeMotionBlurModifier__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace FakeMotionBlurModifier {
        inline app::FakeMotionBlurModifier__Class** type_info() {
            static app::FakeMotionBlurModifier__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::FakeMotionBlurModifier__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::FakeMotionBlurModifier__Class* get_class() {
            return il2cpp::get_class<app::FakeMotionBlurModifier__Class>(type_info(), "", "FakeMotionBlurModifier");
        }
        inline app::FakeMotionBlurModifier* create() {
            return il2cpp::create_object<app::FakeMotionBlurModifier>(get_class());
        }
    } // namespace FakeMotionBlurModifier
} // namespace app::classes::types
