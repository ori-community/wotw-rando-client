#pragma once
#include <Modloader/app/structs/TypeExtensions.h>
#include <Modloader/app/structs/TypeExtensions__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace TypeExtensions {
        inline app::TypeExtensions__Class** type_info() {
            static app::TypeExtensions__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::TypeExtensions__Class**)(modloader::win::memory::resolve_rva(0x0477EB38));
            }
            return cache;
        }
        inline app::TypeExtensions__Class* get_class() {
            return il2cpp::get_class<app::TypeExtensions__Class>(type_info(), "System.Dynamic.Utils", "TypeExtensions");
        }
        inline app::TypeExtensions* create() {
            return il2cpp::create_object<app::TypeExtensions>(get_class());
        }
    } // namespace TypeExtensions
} // namespace app::classes::types
