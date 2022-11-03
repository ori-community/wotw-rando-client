#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace DummyRenderPostprocessor {
        namespace {
            inline app::DummyRenderPostprocessor__Class* type_info_ref = nullptr;
        }
        inline app::DummyRenderPostprocessor__Class** type_info = &type_info_ref;
        inline app::DummyRenderPostprocessor__Class* get_class() {
            return il2cpp::get_class<app::DummyRenderPostprocessor__Class>(type_info, "Moon.Rendering", "DummyRenderPostprocessor");
        }
        inline app::DummyRenderPostprocessor* create() {
            return il2cpp::create_object<app::DummyRenderPostprocessor>(get_class());
        }
    } // namespace DummyRenderPostprocessor
} // namespace app::classes::types
