#pragma once
#include <Modloader/app/structs/X520_LocalityName.h>
#include <Modloader/app/structs/X520_LocalityName__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace X520_LocalityName {
        inline app::X520_LocalityName__Class** type_info() {
            static app::X520_LocalityName__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::X520_LocalityName__Class**)(modloader::win::memory::resolve_rva(0x04778ED0));
            }
            return cache;
        }
        inline app::X520_LocalityName__Class* get_class() {
            return il2cpp::get_nested_class<app::X520_LocalityName__Class>(type_info(), "Mono.Security.X509", "X520", "LocalityName");
        }
        inline app::X520_LocalityName* create() {
            return il2cpp::create_object<app::X520_LocalityName>(get_class());
        }
    } // namespace X520_LocalityName
} // namespace app::classes::types
