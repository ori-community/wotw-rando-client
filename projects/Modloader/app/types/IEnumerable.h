#pragma once
#include <Modloader/app/structs/IEnumerable.h>
#include <Modloader/app/structs/IEnumerable__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace IEnumerable {
        inline app::IEnumerable__Class** type_info() {
            static app::IEnumerable__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::IEnumerable__Class**)(modloader::win::memory::resolve_rva(0x0475B9A8));
            }
            return cache;
        }
        inline app::IEnumerable__Class* get_class() {
            return il2cpp::get_class<app::IEnumerable__Class>(type_info(), "System.Collections", "IEnumerable");
        }
    } // namespace IEnumerable
} // namespace app::classes::types
