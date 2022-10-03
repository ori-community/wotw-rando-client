#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace ExcludeFromCodeCoverageAttribute {
        namespace {
            app::ExcludeFromCodeCoverageAttribute__Class* type_info_ref = nullptr;
        }
        app::ExcludeFromCodeCoverageAttribute__Class** type_info = &type_info_ref;
        inline app::ExcludeFromCodeCoverageAttribute__Class* get_class() {
            return il2cpp::get_class<app::ExcludeFromCodeCoverageAttribute__Class>(type_info, "System.Diagnostics.CodeAnalysis", "ExcludeFromCodeCoverageAttribute");
        }
        inline app::ExcludeFromCodeCoverageAttribute* create() {
            return il2cpp::create_object<app::ExcludeFromCodeCoverageAttribute>(get_class());
        }
    } // namespace ExcludeFromCodeCoverageAttribute
} // namespace app::classes::types
