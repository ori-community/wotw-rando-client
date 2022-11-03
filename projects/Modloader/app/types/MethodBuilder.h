#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace MethodBuilder {
        namespace {
            inline app::MethodBuilder__Class* type_info_ref = nullptr;
        }
        inline app::MethodBuilder__Class** type_info = &type_info_ref;
        inline app::MethodBuilder__Class* get_class() {
            return il2cpp::get_class<app::MethodBuilder__Class>(type_info, "System.Reflection.Emit", "MethodBuilder");
        }
        inline app::MethodBuilder* create() {
            return il2cpp::create_object<app::MethodBuilder>(get_class());
        }
    } // namespace MethodBuilder
} // namespace app::classes::types
