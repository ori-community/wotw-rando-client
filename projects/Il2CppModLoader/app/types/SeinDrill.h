#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace SeinDrill {
        namespace {
            app::SeinDrill__Class* type_info_ref = nullptr;
        }
        app::SeinDrill__Class** type_info = &type_info_ref;
        inline app::SeinDrill__Class* get_class() {
            return il2cpp::get_class<app::SeinDrill__Class>(type_info, "", "SeinDrill");
        }
        inline app::SeinDrill* create() {
            return il2cpp::create_object<app::SeinDrill>(get_class());
        }
    } // namespace SeinDrill
} // namespace app::classes::types
