#pragma once
#include <Modloader/app/structs/TernaryTreeReadOnly.h>
#include <Modloader/app/structs/TernaryTreeReadOnly__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace TernaryTreeReadOnly {
        inline app::TernaryTreeReadOnly__Class** type_info() {
            static app::TernaryTreeReadOnly__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::TernaryTreeReadOnly__Class**)(modloader::win::memory::resolve_rva(0x047438F0));
            }
            return cache;
        }
        inline app::TernaryTreeReadOnly__Class* get_class() {
            return il2cpp::get_class<app::TernaryTreeReadOnly__Class>(type_info(), "System.Xml", "TernaryTreeReadOnly");
        }
        inline app::TernaryTreeReadOnly* create() {
            return il2cpp::create_object<app::TernaryTreeReadOnly>(get_class());
        }
    } // namespace TernaryTreeReadOnly
} // namespace app::classes::types
