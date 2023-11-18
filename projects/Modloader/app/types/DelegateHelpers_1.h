#pragma once
#include <Modloader/app/structs/DelegateHelpers_1.h>
#include <Modloader/app/structs/DelegateHelpers_1__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace DelegateHelpers_1 {
        inline app::DelegateHelpers_1__Class** type_info() {
            static app::DelegateHelpers_1__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::DelegateHelpers_1__Class**)(modloader::win::memory::resolve_rva(0x0473C740));
            }
            return cache;
        }
        inline app::DelegateHelpers_1__Class* get_class() {
            return il2cpp::get_class<app::DelegateHelpers_1__Class>(type_info(), "System.Linq.Expressions.Compiler", "DelegateHelpers");
        }
        inline app::DelegateHelpers_1* create() {
            return il2cpp::create_object<app::DelegateHelpers_1>(get_class());
        }
    } // namespace DelegateHelpers_1
} // namespace app::classes::types
