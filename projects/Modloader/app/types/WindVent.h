#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace WindVent {
        namespace {
            inline app::WindVent__Class* type_info_ref = nullptr;
        }
        inline app::WindVent__Class** type_info = &type_info_ref;
        inline app::WindVent__Class* get_class() {
            return il2cpp::get_class<app::WindVent__Class>(type_info, "", "WindVent");
        }
        inline app::WindVent* create() {
            return il2cpp::create_object<app::WindVent>(get_class());
        }
    } // namespace WindVent
} // namespace app::classes::types
