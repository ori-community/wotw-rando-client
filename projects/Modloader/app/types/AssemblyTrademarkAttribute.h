#pragma once
#include <Modloader/app/structs/AssemblyTrademarkAttribute.h>
#include <Modloader/app/structs/AssemblyTrademarkAttribute__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace AssemblyTrademarkAttribute {
        inline app::AssemblyTrademarkAttribute__Class** type_info() {
            static app::AssemblyTrademarkAttribute__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::AssemblyTrademarkAttribute__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::AssemblyTrademarkAttribute__Class* get_class() {
            return il2cpp::get_class<app::AssemblyTrademarkAttribute__Class>(type_info(), "System.Reflection", "AssemblyTrademarkAttribute");
        }
        inline app::AssemblyTrademarkAttribute* create() {
            return il2cpp::create_object<app::AssemblyTrademarkAttribute>(get_class());
        }
    } // namespace AssemblyTrademarkAttribute
} // namespace app::classes::types
