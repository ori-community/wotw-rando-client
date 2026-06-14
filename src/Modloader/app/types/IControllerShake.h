#pragma once
#include <Modloader/app/structs/IControllerShake.h>
#include <Modloader/app/structs/IControllerShake__Array.h>
#include <Modloader/app/structs/IControllerShake__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace IControllerShake {
        inline app::IControllerShake__Class** type_info() {
            static app::IControllerShake__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::IControllerShake__Class**)(modloader::win::memory::resolve_rva(0x04713A40));
            }
            return cache;
        }
        inline app::IControllerShake__Class* get_class() {
            return il2cpp::get_class<app::IControllerShake__Class>(type_info(), "", "IControllerShake");
        }
        inline app::IControllerShake__Array* create_array(int size) {
            return il2cpp::array_new<app::IControllerShake__Array>(get_class(), size);
        }
        inline app::IControllerShake__Array* create_array(const std::vector<app::IControllerShake*>& items) {
            return il2cpp::array_new<app::IControllerShake__Array>(get_class(), items);
        }
    } // namespace IControllerShake
} // namespace app::classes::types
