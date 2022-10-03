#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace Compositor__Enum {
        namespace {
            app::Compositor__Enum__Class* type_info_ref = nullptr;
        }
        app::Compositor__Enum__Class** type_info = &type_info_ref;
        inline app::Compositor__Enum__Class* get_class() {
            return il2cpp::get_class<app::Compositor__Enum__Class>(type_info, "System.Xml.Schema", "Compositor");
        }
        inline app::Compositor__Enum* create() {
            return il2cpp::create_object<app::Compositor__Enum>(get_class());
        }
    } // namespace Compositor__Enum
} // namespace app::classes::types
