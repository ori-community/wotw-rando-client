#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace PureAttribute {
        namespace {
            inline app::PureAttribute__Class* type_info_ref = nullptr;
        }
        inline app::PureAttribute__Class** type_info = &type_info_ref;
        inline app::PureAttribute__Class* get_class() {
            return il2cpp::get_class<app::PureAttribute__Class>(type_info, "JetBrains.Annotations", "PureAttribute");
        }
        inline app::PureAttribute* create() {
            return il2cpp::create_object<app::PureAttribute>(get_class());
        }
    } // namespace PureAttribute
} // namespace app::classes::types
