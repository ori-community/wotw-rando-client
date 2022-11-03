#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace CartAnimation {
        namespace {
            inline app::CartAnimation__Class* type_info_ref = nullptr;
        }
        inline app::CartAnimation__Class** type_info = &type_info_ref;
        inline app::CartAnimation__Class* get_class() {
            return il2cpp::get_class<app::CartAnimation__Class>(type_info, "", "CartAnimation");
        }
        inline app::CartAnimation* create() {
            return il2cpp::create_object<app::CartAnimation>(get_class());
        }
    } // namespace CartAnimation
} // namespace app::classes::types
