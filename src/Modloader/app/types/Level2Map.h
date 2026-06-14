#pragma once
#include <Modloader/app/structs/Level2Map.h>
#include <Modloader/app/structs/Level2Map__Array.h>
#include <Modloader/app/structs/Level2Map__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace Level2Map {
        inline app::Level2Map__Class** type_info() {
            static app::Level2Map__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::Level2Map__Class**)(modloader::win::memory::resolve_rva(0x04717BC8));
            }
            return cache;
        }
        inline app::Level2Map__Class* get_class() {
            return il2cpp::get_class<app::Level2Map__Class>(type_info(), "Mono.Globalization.Unicode", "Level2Map");
        }
        inline app::Level2Map* create() {
            return il2cpp::create_object<app::Level2Map>(get_class());
        }
        inline app::Level2Map__Array* create_array(int size) {
            return il2cpp::array_new<app::Level2Map__Array>(get_class(), size);
        }
        inline app::Level2Map__Array* create_array(const std::vector<app::Level2Map*>& items) {
            return il2cpp::array_new<app::Level2Map__Array>(get_class(), items);
        }
    } // namespace Level2Map
} // namespace app::classes::types
