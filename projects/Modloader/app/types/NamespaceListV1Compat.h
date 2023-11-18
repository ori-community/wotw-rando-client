#pragma once
#include <Modloader/app/structs/NamespaceListV1Compat.h>
#include <Modloader/app/structs/NamespaceListV1Compat__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace NamespaceListV1Compat {
        inline app::NamespaceListV1Compat__Class** type_info() {
            static app::NamespaceListV1Compat__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::NamespaceListV1Compat__Class**)(modloader::win::memory::resolve_rva(0x0473FC08));
            }
            return cache;
        }
        inline app::NamespaceListV1Compat__Class* get_class() {
            return il2cpp::get_class<app::NamespaceListV1Compat__Class>(type_info(), "System.Xml.Schema", "NamespaceListV1Compat");
        }
        inline app::NamespaceListV1Compat* create() {
            return il2cpp::create_object<app::NamespaceListV1Compat>(get_class());
        }
    } // namespace NamespaceListV1Compat
} // namespace app::classes::types
