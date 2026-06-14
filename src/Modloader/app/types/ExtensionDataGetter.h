#pragma once
#include <Modloader/app/structs/ExtensionDataGetter.h>
#include <Modloader/app/structs/ExtensionDataGetter__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ExtensionDataGetter {
        inline app::ExtensionDataGetter__Class** type_info() {
            static app::ExtensionDataGetter__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::ExtensionDataGetter__Class**)(modloader::win::memory::resolve_rva(0x0475DC78));
            }
            return cache;
        }
        inline app::ExtensionDataGetter__Class* get_class() {
            return il2cpp::get_class<app::ExtensionDataGetter__Class>(type_info(), "Newtonsoft.Json.Serialization", "ExtensionDataGetter");
        }
        inline app::ExtensionDataGetter* create() {
            return il2cpp::create_object<app::ExtensionDataGetter>(get_class());
        }
    } // namespace ExtensionDataGetter
} // namespace app::classes::types
