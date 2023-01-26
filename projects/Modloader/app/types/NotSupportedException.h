#pragma once
#include <Modloader/app/structs/NotSupportedException.h>
#include <Modloader/app/structs/NotSupportedException__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace NotSupportedException {
        inline app::NotSupportedException__Class** type_info() {
            static app::NotSupportedException__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::NotSupportedException__Class**)(modloader::win::memory::resolve_rva(0x047603B0));
            }
            return cache;
        }
        inline app::NotSupportedException__Class* get_class() {
            return il2cpp::get_class<app::NotSupportedException__Class>(type_info(), "System", "NotSupportedException");
        }
        inline app::NotSupportedException* create() {
            return il2cpp::create_object<app::NotSupportedException>(get_class());
        }
    } // namespace NotSupportedException
} // namespace app::classes::types
