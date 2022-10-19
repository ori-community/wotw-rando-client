#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace AssemblyCopyrightAttribute {
        namespace {
            inline app::AssemblyCopyrightAttribute__Class* type_info_ref = nullptr;
        }
        inline app::AssemblyCopyrightAttribute__Class** type_info = &type_info_ref;
        inline app::AssemblyCopyrightAttribute__Class* get_class() {
            return il2cpp::get_class<app::AssemblyCopyrightAttribute__Class>(type_info, "System.Reflection", "AssemblyCopyrightAttribute");
        }
        inline app::AssemblyCopyrightAttribute* create() {
            return il2cpp::create_object<app::AssemblyCopyrightAttribute>(get_class());
        }
    } // namespace AssemblyCopyrightAttribute
} // namespace app::classes::types
