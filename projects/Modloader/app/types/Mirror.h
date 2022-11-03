#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace Mirror {
        namespace {
            inline app::Mirror__Class* type_info_ref = nullptr;
        }
        inline app::Mirror__Class** type_info = &type_info_ref;
        inline app::Mirror__Class* get_class() {
            return il2cpp::get_class<app::Mirror__Class>(type_info, "RootMotion.Demos", "Mirror");
        }
        inline app::Mirror* create() {
            return il2cpp::create_object<app::Mirror>(get_class());
        }
    } // namespace Mirror
} // namespace app::classes::types
