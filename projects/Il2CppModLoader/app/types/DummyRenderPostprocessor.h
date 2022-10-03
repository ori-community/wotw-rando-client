#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace DummyRenderPostprocessor {
        namespace {
            app::DummyRenderPostprocessor__Class* type_info_ref = nullptr;
        }
        app::DummyRenderPostprocessor__Class** type_info = &type_info_ref;
        inline app::DummyRenderPostprocessor__Class* get_class() {
            return il2cpp::get_class<app::DummyRenderPostprocessor__Class>(type_info, "Moon.Rendering", "DummyRenderPostprocessor");
        }
        inline app::DummyRenderPostprocessor* create() {
            return il2cpp::create_object<app::DummyRenderPostprocessor>(get_class());
        }
    } // namespace DummyRenderPostprocessor
} // namespace app::classes::types
