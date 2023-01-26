#pragma once
#include <Modloader/app/structs/DelegateHelpers_c.h>
#include <Modloader/app/structs/DelegateHelpers_c__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace DelegateHelpers_c {
        inline app::DelegateHelpers_c__Class** type_info() {
            static app::DelegateHelpers_c__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::DelegateHelpers_c__Class**)(modloader::win::memory::resolve_rva(0x0476EED0));
            }
            return cache;
        }
        inline app::DelegateHelpers_c__Class* get_class() {
            return il2cpp::get_nested_class<app::DelegateHelpers_c__Class>(type_info(), "System.Linq.Expressions.Interpreter", "DelegateHelpers", "<>c");
        }
        inline app::DelegateHelpers_c* create() {
            return il2cpp::create_object<app::DelegateHelpers_c>(get_class());
        }
    } // namespace DelegateHelpers_c
} // namespace app::classes::types
