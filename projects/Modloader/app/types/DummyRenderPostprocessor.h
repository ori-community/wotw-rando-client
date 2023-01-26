#pragma once
#include <Modloader/app/structs/DummyRenderPostprocessor.h>
#include <Modloader/app/structs/DummyRenderPostprocessor__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace DummyRenderPostprocessor {
        inline app::DummyRenderPostprocessor__Class** type_info() {
            static app::DummyRenderPostprocessor__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::DummyRenderPostprocessor__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::DummyRenderPostprocessor__Class* get_class() {
            return il2cpp::get_class<app::DummyRenderPostprocessor__Class>(type_info(), "Moon.Rendering", "DummyRenderPostprocessor");
        }
        inline app::DummyRenderPostprocessor* create() {
            return il2cpp::create_object<app::DummyRenderPostprocessor>(get_class());
        }
    } // namespace DummyRenderPostprocessor
} // namespace app::classes::types
