#pragma once
#include <Modloader/app/structs/Language__Enum.h>
#include <Modloader/app/structs/Language__Enum__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace Language__Enum {
        inline app::Language__Enum__Class** type_info() {
            static app::Language__Enum__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::Language__Enum__Class**)(modloader::win::memory::resolve_rva(0x04729A60));
            }
            return cache;
        }
        inline app::Language__Enum__Class* get_class() {
            return il2cpp::get_class<app::Language__Enum__Class>(type_info(), "", "Language");
        }
        inline app::Language__Enum* create() {
            return il2cpp::create_object<app::Language__Enum>(get_class());
        }
    } // namespace Language__Enum
} // namespace app::classes::types
