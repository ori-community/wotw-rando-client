#pragma once
#include <Modloader/app/structs/Tokens__Enum.h>
#include <Modloader/app/structs/Tokens__Enum__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace Tokens__Enum {
        inline app::Tokens__Enum__Class** type_info() {
            static app::Tokens__Enum__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::Tokens__Enum__Class**)(modloader::win::memory::resolve_rva(0x04727858));
            }
            return cache;
        }
        inline app::Tokens__Enum__Class* get_class() {
            return il2cpp::get_class<app::Tokens__Enum__Class>(type_info(), "System.Data", "Tokens");
        }
        inline app::Tokens__Enum* create() {
            return il2cpp::create_object<app::Tokens__Enum>(get_class());
        }
    } // namespace Tokens__Enum
} // namespace app::classes::types
