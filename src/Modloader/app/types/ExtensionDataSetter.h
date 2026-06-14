#pragma once
#include <Modloader/app/structs/ExtensionDataSetter.h>
#include <Modloader/app/structs/ExtensionDataSetter__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ExtensionDataSetter {
        inline app::ExtensionDataSetter__Class** type_info() {
            static app::ExtensionDataSetter__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::ExtensionDataSetter__Class**)(modloader::win::memory::resolve_rva(0x0478C310));
            }
            return cache;
        }
        inline app::ExtensionDataSetter__Class* get_class() {
            return il2cpp::get_class<app::ExtensionDataSetter__Class>(type_info(), "Newtonsoft.Json.Serialization", "ExtensionDataSetter");
        }
        inline app::ExtensionDataSetter* create() {
            return il2cpp::create_object<app::ExtensionDataSetter>(get_class());
        }
    } // namespace ExtensionDataSetter
} // namespace app::classes::types
