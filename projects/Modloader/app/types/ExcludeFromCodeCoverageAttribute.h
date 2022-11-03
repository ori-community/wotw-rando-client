#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace ExcludeFromCodeCoverageAttribute {
        namespace {
            inline app::ExcludeFromCodeCoverageAttribute__Class* type_info_ref = nullptr;
        }
        inline app::ExcludeFromCodeCoverageAttribute__Class** type_info = &type_info_ref;
        inline app::ExcludeFromCodeCoverageAttribute__Class* get_class() {
            return il2cpp::get_class<app::ExcludeFromCodeCoverageAttribute__Class>(type_info, "System.Diagnostics.CodeAnalysis", "ExcludeFromCodeCoverageAttribute");
        }
        inline app::ExcludeFromCodeCoverageAttribute* create() {
            return il2cpp::create_object<app::ExcludeFromCodeCoverageAttribute>(get_class());
        }
    } // namespace ExcludeFromCodeCoverageAttribute
} // namespace app::classes::types
