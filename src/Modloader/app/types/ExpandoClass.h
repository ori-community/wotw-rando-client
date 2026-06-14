#pragma once
#include <Modloader/app/structs/ExpandoClass.h>
#include <Modloader/app/structs/ExpandoClass__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ExpandoClass {
        inline app::ExpandoClass__Class** type_info() {
            static app::ExpandoClass__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::ExpandoClass__Class**)(modloader::win::memory::resolve_rva(0x0477A2E0));
            }
            return cache;
        }
        inline app::ExpandoClass__Class* get_class() {
            return il2cpp::get_class<app::ExpandoClass__Class>(type_info(), "System.Dynamic", "ExpandoClass");
        }
        inline app::ExpandoClass* create() {
            return il2cpp::create_object<app::ExpandoClass>(get_class());
        }
    } // namespace ExpandoClass
} // namespace app::classes::types
