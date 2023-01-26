#pragma once
#include <Modloader/app/structs/LightInfluence.h>
#include <Modloader/app/structs/LightInfluence__Array.h>
#include <Modloader/app/structs/LightInfluence__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace LightInfluence {
        inline app::LightInfluence__Class** type_info() {
            static app::LightInfluence__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::LightInfluence__Class**)(modloader::win::memory::resolve_rva(0x0476AFB8));
            }
            return cache;
        }
        inline app::LightInfluence__Class* get_class() {
            return il2cpp::get_class<app::LightInfluence__Class>(type_info(), "", "LightInfluence");
        }
        inline app::LightInfluence* create() {
            return il2cpp::create_object<app::LightInfluence>(get_class());
        }
        inline app::LightInfluence__Array* create_array(int size) {
            return il2cpp::array_new<app::LightInfluence__Array>(get_class(), size);
        }
        inline app::LightInfluence__Array* create_array(const std::vector<app::LightInfluence*>& items) {
            return il2cpp::array_new<app::LightInfluence__Array>(get_class(), items);
        }
    } // namespace LightInfluence
} // namespace app::classes::types
