#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace RecorderPostRender {
        namespace {
            inline app::RecorderPostRender__Class* type_info_ref = nullptr;
        }
        inline app::RecorderPostRender__Class** type_info = &type_info_ref;
        inline app::RecorderPostRender__Class* get_class() {
            return il2cpp::get_class<app::RecorderPostRender__Class>(type_info, "", "RecorderPostRender");
        }
        inline app::RecorderPostRender* create() {
            return il2cpp::create_object<app::RecorderPostRender>(get_class());
        }
    } // namespace RecorderPostRender
} // namespace app::classes::types
