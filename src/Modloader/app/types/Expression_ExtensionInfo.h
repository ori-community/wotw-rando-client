#pragma once
#include <Modloader/app/structs/Expression_ExtensionInfo.h>
#include <Modloader/app/structs/Expression_ExtensionInfo__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace Expression_ExtensionInfo {
        inline app::Expression_ExtensionInfo__Class** type_info() {
            static app::Expression_ExtensionInfo__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::Expression_ExtensionInfo__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::Expression_ExtensionInfo__Class* get_class() {
            return il2cpp::get_nested_class<app::Expression_ExtensionInfo__Class>(type_info(), "System.Linq.Expressions", "Expression", "ExtensionInfo");
        }
        inline app::Expression_ExtensionInfo* create() {
            return il2cpp::create_object<app::Expression_ExtensionInfo>(get_class());
        }
    } // namespace Expression_ExtensionInfo
} // namespace app::classes::types
