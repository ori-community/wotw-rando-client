#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace Bootstrap {
        namespace {
            inline app::Bootstrap__Class* type_info_ref = nullptr;
        }
        inline app::Bootstrap__Class** type_info = &type_info_ref;
        inline app::Bootstrap__Class* get_class() {
            return il2cpp::get_class<app::Bootstrap__Class>(type_info, "", "Bootstrap");
        }
        inline app::Bootstrap* create() {
            return il2cpp::create_object<app::Bootstrap>(get_class());
        }
    } // namespace Bootstrap
} // namespace app::classes::types
