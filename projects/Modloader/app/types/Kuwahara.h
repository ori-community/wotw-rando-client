#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace Kuwahara {
        namespace {
            inline app::Kuwahara__Class* type_info_ref = nullptr;
        }
        inline app::Kuwahara__Class** type_info = &type_info_ref;
        inline app::Kuwahara__Class* get_class() {
            return il2cpp::get_class<app::Kuwahara__Class>(type_info, "Colorful", "Kuwahara");
        }
        inline app::Kuwahara* create() {
            return il2cpp::create_object<app::Kuwahara>(get_class());
        }
    } // namespace Kuwahara
} // namespace app::classes::types
