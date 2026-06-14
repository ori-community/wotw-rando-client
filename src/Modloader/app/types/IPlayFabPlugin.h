#pragma once
#include <Modloader/app/structs/IPlayFabPlugin.h>
#include <Modloader/app/structs/IPlayFabPlugin__Array.h>
#include <Modloader/app/structs/IPlayFabPlugin__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace IPlayFabPlugin {
        inline app::IPlayFabPlugin__Class** type_info() {
            static app::IPlayFabPlugin__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::IPlayFabPlugin__Class**)(modloader::win::memory::resolve_rva(0x047257C0));
            }
            return cache;
        }
        inline app::IPlayFabPlugin__Class* get_class() {
            return il2cpp::get_class<app::IPlayFabPlugin__Class>(type_info(), "PlayFab", "IPlayFabPlugin");
        }
        inline app::IPlayFabPlugin__Array* create_array(int size) {
            return il2cpp::array_new<app::IPlayFabPlugin__Array>(get_class(), size);
        }
        inline app::IPlayFabPlugin__Array* create_array(const std::vector<app::IPlayFabPlugin*>& items) {
            return il2cpp::array_new<app::IPlayFabPlugin__Array>(get_class(), items);
        }
    } // namespace IPlayFabPlugin
} // namespace app::classes::types
