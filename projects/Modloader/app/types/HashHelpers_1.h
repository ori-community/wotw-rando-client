#pragma once
#include <Modloader/app/structs/HashHelpers_1.h>
#include <Modloader/app/structs/HashHelpers_1__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace HashHelpers_1 {
        inline app::HashHelpers_1__Class** type_info() {
            static app::HashHelpers_1__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::HashHelpers_1__Class**)(modloader::win::memory::resolve_rva(0x04723550));
            }
            return cache;
        }
        inline app::HashHelpers_1__Class* get_class() {
            return il2cpp::get_class<app::HashHelpers_1__Class>(type_info(), "System.Collections", "HashHelpers");
        }
        inline app::HashHelpers_1* create() {
            return il2cpp::create_object<app::HashHelpers_1>(get_class());
        }
    } // namespace HashHelpers_1
} // namespace app::classes::types
