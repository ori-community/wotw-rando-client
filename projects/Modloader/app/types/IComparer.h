#pragma once
#include <Modloader/app/structs/IComparer.h>
#include <Modloader/app/structs/IComparer__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace IComparer {
        inline app::IComparer__Class** type_info() {
            static app::IComparer__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::IComparer__Class**)(modloader::win::memory::resolve_rva(0x0471DBE0));
            }
            return cache;
        }
        inline app::IComparer__Class* get_class() {
            return il2cpp::get_class<app::IComparer__Class>(type_info(), "System.Collections", "IComparer");
        }
    } // namespace IComparer
} // namespace app::classes::types
