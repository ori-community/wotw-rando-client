#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace LocalBuilder {
        namespace {
            inline app::LocalBuilder__Class* type_info_ref = nullptr;
        }
        inline app::LocalBuilder__Class** type_info = &type_info_ref;
        inline app::LocalBuilder__Class* get_class() {
            return il2cpp::get_class<app::LocalBuilder__Class>(type_info, "System.Reflection.Emit", "LocalBuilder");
        }
        inline app::LocalBuilder* create() {
            return il2cpp::create_object<app::LocalBuilder>(get_class());
        }
    } // namespace LocalBuilder
} // namespace app::classes::types
