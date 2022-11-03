#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace AreaMapScrollLimit__Array {
        namespace {
            inline app::AreaMapScrollLimit__Array__Class* type_info_ref = nullptr;
        }
        inline app::AreaMapScrollLimit__Array__Class** type_info = &type_info_ref;
        inline app::AreaMapScrollLimit__Array__Class* get_class() {
            return il2cpp::get_class<app::AreaMapScrollLimit__Array__Class>(type_info, "", "AreaMapScrollLimit[]");
        }
        inline app::AreaMapScrollLimit__Array* create() {
            return il2cpp::create_object<app::AreaMapScrollLimit__Array>(get_class());
        }
    } // namespace AreaMapScrollLimit__Array
} // namespace app::classes::types
