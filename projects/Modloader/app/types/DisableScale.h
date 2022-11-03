#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace DisableScale {
        namespace {
            inline app::DisableScale__Class* type_info_ref = nullptr;
        }
        inline app::DisableScale__Class** type_info = &type_info_ref;
        inline app::DisableScale__Class* get_class() {
            return il2cpp::get_class<app::DisableScale__Class>(type_info, "", "DisableScale");
        }
        inline app::DisableScale* create() {
            return il2cpp::create_object<app::DisableScale>(get_class());
        }
    } // namespace DisableScale
} // namespace app::classes::types
