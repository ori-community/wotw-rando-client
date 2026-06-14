#pragma once
#include <Modloader/app/structs/ISerializerPlugin.h>
#include <Modloader/app/structs/ISerializerPlugin__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ISerializerPlugin {
        inline app::ISerializerPlugin__Class** type_info() {
            static app::ISerializerPlugin__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::ISerializerPlugin__Class**)(modloader::win::memory::resolve_rva(0x04737D48));
            }
            return cache;
        }
        inline app::ISerializerPlugin__Class* get_class() {
            return il2cpp::get_class<app::ISerializerPlugin__Class>(type_info(), "PlayFab", "ISerializerPlugin");
        }
    } // namespace ISerializerPlugin
} // namespace app::classes::types
