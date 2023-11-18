#pragma once
#include <Modloader/app/structs/TypeExtensions_c.h>
#include <Modloader/app/structs/TypeExtensions_c__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace TypeExtensions_c {
        inline app::TypeExtensions_c__Class** type_info() {
            static app::TypeExtensions_c__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::TypeExtensions_c__Class**)(modloader::win::memory::resolve_rva(0x0473BBA0));
            }
            return cache;
        }
        inline app::TypeExtensions_c__Class* get_class() {
            return il2cpp::get_nested_class<app::TypeExtensions_c__Class>(type_info(), "UWPCompat.Extensions", "TypeExtensions", "<>c");
        }
        inline app::TypeExtensions_c* create() {
            return il2cpp::create_object<app::TypeExtensions_c>(get_class());
        }
    } // namespace TypeExtensions_c
} // namespace app::classes::types
