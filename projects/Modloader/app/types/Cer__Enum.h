#pragma once
#include <Modloader/app/structs/Cer__Enum.h>
#include <Modloader/app/structs/Cer__Enum__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace Cer__Enum {
        inline app::Cer__Enum__Class** type_info() {
            static app::Cer__Enum__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::Cer__Enum__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::Cer__Enum__Class* get_class() {
            return il2cpp::get_class<app::Cer__Enum__Class>(type_info(), "System.Runtime.ConstrainedExecution", "Cer");
        }
        inline app::Cer__Enum* create() {
            return il2cpp::create_object<app::Cer__Enum>(get_class());
        }
    } // namespace Cer__Enum
} // namespace app::classes::types
