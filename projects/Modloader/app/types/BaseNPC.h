#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace BaseNPC {
        namespace {
            inline app::BaseNPC__Class* type_info_ref = nullptr;
        }
        inline app::BaseNPC__Class** type_info = &type_info_ref;
        inline app::BaseNPC__Class* get_class() {
            return il2cpp::get_class<app::BaseNPC__Class>(type_info, "", "BaseNPC");
        }
        inline app::BaseNPC* create() {
            return il2cpp::create_object<app::BaseNPC>(get_class());
        }
    } // namespace BaseNPC
} // namespace app::classes::types
