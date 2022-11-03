#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace WandererStateSelector {
        namespace {
            inline app::WandererStateSelector__Class* type_info_ref = nullptr;
        }
        inline app::WandererStateSelector__Class** type_info = &type_info_ref;
        inline app::WandererStateSelector__Class* get_class() {
            return il2cpp::get_class<app::WandererStateSelector__Class>(type_info, "", "WandererStateSelector");
        }
        inline app::WandererStateSelector* create() {
            return il2cpp::create_object<app::WandererStateSelector>(get_class());
        }
    } // namespace WandererStateSelector
} // namespace app::classes::types
