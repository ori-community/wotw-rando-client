#pragma once
#include <Modloader/app/structs/CharEnumerator.h>
#include <Modloader/app/structs/CharEnumerator__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace CharEnumerator {
        inline app::CharEnumerator__Class** type_info() {
            static app::CharEnumerator__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::CharEnumerator__Class**)(modloader::win::memory::resolve_rva(0x0475E600));
            }
            return cache;
        }
        inline app::CharEnumerator__Class* get_class() {
            return il2cpp::get_class<app::CharEnumerator__Class>(type_info(), "System", "CharEnumerator");
        }
        inline app::CharEnumerator* create() {
            return il2cpp::create_object<app::CharEnumerator>(get_class());
        }
    } // namespace CharEnumerator
} // namespace app::classes::types
