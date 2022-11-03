#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace UberSwarm {
        namespace {
            inline app::UberSwarm__Class* type_info_ref = nullptr;
        }
        inline app::UberSwarm__Class** type_info = &type_info_ref;
        inline app::UberSwarm__Class* get_class() {
            return il2cpp::get_class<app::UberSwarm__Class>(type_info, "", "UberSwarm");
        }
        inline app::UberSwarm* create() {
            return il2cpp::create_object<app::UberSwarm>(get_class());
        }
    } // namespace UberSwarm
} // namespace app::classes::types
