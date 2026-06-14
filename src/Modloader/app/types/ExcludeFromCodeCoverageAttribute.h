#pragma once
#include <Modloader/app/structs/ExcludeFromCodeCoverageAttribute.h>
#include <Modloader/app/structs/ExcludeFromCodeCoverageAttribute__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ExcludeFromCodeCoverageAttribute {
        inline app::ExcludeFromCodeCoverageAttribute__Class** type_info() {
            static app::ExcludeFromCodeCoverageAttribute__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::ExcludeFromCodeCoverageAttribute__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::ExcludeFromCodeCoverageAttribute__Class* get_class() {
            return il2cpp::get_class<app::ExcludeFromCodeCoverageAttribute__Class>(type_info(), "System.Diagnostics.CodeAnalysis", "ExcludeFromCodeCoverageAttribute");
        }
        inline app::ExcludeFromCodeCoverageAttribute* create() {
            return il2cpp::create_object<app::ExcludeFromCodeCoverageAttribute>(get_class());
        }
    } // namespace ExcludeFromCodeCoverageAttribute
} // namespace app::classes::types
