#pragma once
#include <Modloader/app/structs/IGenericResourceEnumerator.h>
#include <Modloader/app/structs/IGenericResourceEnumerator__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace IGenericResourceEnumerator {
        inline app::IGenericResourceEnumerator__Class** type_info() {
            static app::IGenericResourceEnumerator__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::IGenericResourceEnumerator__Class**)(modloader::win::memory::resolve_rva(0x0473A638));
            }
            return cache;
        }
        inline app::IGenericResourceEnumerator__Class* get_class() {
            return il2cpp::get_class<app::IGenericResourceEnumerator__Class>(type_info(), "", "IGenericResourceEnumerator");
        }
    } // namespace IGenericResourceEnumerator
} // namespace app::classes::types
