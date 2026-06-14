#pragma once
#include <Modloader/app/structs/ExclusiveReference.h>
#include <Modloader/app/structs/ExclusiveReference__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ExclusiveReference {
        inline app::ExclusiveReference__Class** type_info() {
            static app::ExclusiveReference__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::ExclusiveReference__Class**)(modloader::win::memory::resolve_rva(0x04712BE0));
            }
            return cache;
        }
        inline app::ExclusiveReference__Class* get_class() {
            return il2cpp::get_class<app::ExclusiveReference__Class>(type_info(), "System.Text.RegularExpressions", "ExclusiveReference");
        }
        inline app::ExclusiveReference* create() {
            return il2cpp::create_object<app::ExclusiveReference>(get_class());
        }
    } // namespace ExclusiveReference
} // namespace app::classes::types
