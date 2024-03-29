#pragma once
#include <Modloader/app/structs/PaddingMode__Enum.h>
#include <Modloader/app/structs/PaddingMode__Enum__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace PaddingMode__Enum {
        inline app::PaddingMode__Enum__Class** type_info() {
            static app::PaddingMode__Enum__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::PaddingMode__Enum__Class**)(modloader::win::memory::resolve_rva(0x04733E78));
            }
            return cache;
        }
        inline app::PaddingMode__Enum__Class* get_class() {
            return il2cpp::get_class<app::PaddingMode__Enum__Class>(type_info(), "System.Security.Cryptography", "PaddingMode");
        }
        inline app::PaddingMode__Enum* create() {
            return il2cpp::create_object<app::PaddingMode__Enum>(get_class());
        }
    } // namespace PaddingMode__Enum
} // namespace app::classes::types
