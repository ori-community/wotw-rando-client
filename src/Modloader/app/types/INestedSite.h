#pragma once
#include <Modloader/app/structs/INestedSite.h>
#include <Modloader/app/structs/INestedSite__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace INestedSite {
        inline app::INestedSite__Class** type_info() {
            static app::INestedSite__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::INestedSite__Class**)(modloader::win::memory::resolve_rva(0x0478B4C8));
            }
            return cache;
        }
        inline app::INestedSite__Class* get_class() {
            return il2cpp::get_class<app::INestedSite__Class>(type_info(), "System.ComponentModel", "INestedSite");
        }
    } // namespace INestedSite
} // namespace app::classes::types
