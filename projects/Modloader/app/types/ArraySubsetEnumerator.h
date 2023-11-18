#pragma once
#include <Modloader/app/structs/ArraySubsetEnumerator.h>
#include <Modloader/app/structs/ArraySubsetEnumerator__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ArraySubsetEnumerator {
        inline app::ArraySubsetEnumerator__Class** type_info() {
            static app::ArraySubsetEnumerator__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::ArraySubsetEnumerator__Class**)(modloader::win::memory::resolve_rva(0x04752188));
            }
            return cache;
        }
        inline app::ArraySubsetEnumerator__Class* get_class() {
            return il2cpp::get_class<app::ArraySubsetEnumerator__Class>(type_info(), "System.ComponentModel", "ArraySubsetEnumerator");
        }
        inline app::ArraySubsetEnumerator* create() {
            return il2cpp::create_object<app::ArraySubsetEnumerator>(get_class());
        }
    } // namespace ArraySubsetEnumerator
} // namespace app::classes::types
