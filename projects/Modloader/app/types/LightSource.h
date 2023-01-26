#pragma once
#include <Modloader/app/structs/LightSource.h>
#include <Modloader/app/structs/LightSource__Array.h>
#include <Modloader/app/structs/LightSource__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace LightSource {
        inline app::LightSource__Class** type_info() {
            static app::LightSource__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::LightSource__Class**)(modloader::win::memory::resolve_rva(0x0473AAC8));
            }
            return cache;
        }
        inline app::LightSource__Class* get_class() {
            return il2cpp::get_class<app::LightSource__Class>(type_info(), "", "LightSource");
        }
        inline app::LightSource* create() {
            return il2cpp::create_object<app::LightSource>(get_class());
        }
        inline app::LightSource__Array* create_array(int size) {
            return il2cpp::array_new<app::LightSource__Array>(get_class(), size);
        }
        inline app::LightSource__Array* create_array(const std::vector<app::LightSource*>& items) {
            return il2cpp::array_new<app::LightSource__Array>(get_class(), items);
        }
    } // namespace LightSource
} // namespace app::classes::types
