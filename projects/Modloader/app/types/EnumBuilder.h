#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace EnumBuilder {
        namespace {
            inline app::EnumBuilder__Class* type_info_ref = nullptr;
        }
        inline app::EnumBuilder__Class** type_info = &type_info_ref;
        inline app::EnumBuilder__Class* get_class() {
            return il2cpp::get_class<app::EnumBuilder__Class>(type_info, "System.Reflection.Emit", "EnumBuilder");
        }
        inline app::EnumBuilder* create() {
            return il2cpp::create_object<app::EnumBuilder>(get_class());
        }
    } // namespace EnumBuilder
} // namespace app::classes::types
