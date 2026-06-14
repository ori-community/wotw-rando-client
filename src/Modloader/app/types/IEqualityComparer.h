#pragma once
#include <Modloader/app/structs/IEqualityComparer.h>
#include <Modloader/app/structs/IEqualityComparer__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace IEqualityComparer {
        inline app::IEqualityComparer__Class** type_info() {
            static app::IEqualityComparer__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::IEqualityComparer__Class**)(modloader::win::memory::resolve_rva(0x047941F0));
            }
            return cache;
        }
        inline app::IEqualityComparer__Class* get_class() {
            return il2cpp::get_class<app::IEqualityComparer__Class>(type_info(), "System.Collections", "IEqualityComparer");
        }
    } // namespace IEqualityComparer
} // namespace app::classes::types
