#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace PropertyBuilder {
        namespace {
            inline app::PropertyBuilder__Class* type_info_ref = nullptr;
        }
        inline app::PropertyBuilder__Class** type_info = &type_info_ref;
        inline app::PropertyBuilder__Class* get_class() {
            return il2cpp::get_class<app::PropertyBuilder__Class>(type_info, "System.Reflection.Emit", "PropertyBuilder");
        }
        inline app::PropertyBuilder* create() {
            return il2cpp::create_object<app::PropertyBuilder>(get_class());
        }
    } // namespace PropertyBuilder
} // namespace app::classes::types
