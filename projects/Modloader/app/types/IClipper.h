#pragma once
#include <Modloader/app/structs/IClipper.h>
#include <Modloader/app/structs/IClipper__Array.h>
#include <Modloader/app/structs/IClipper__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace IClipper {
        inline app::IClipper__Class** type_info() {
            static app::IClipper__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::IClipper__Class**)(modloader::win::memory::resolve_rva(0x0478EF48));
            }
            return cache;
        }
        inline app::IClipper__Class* get_class() {
            return il2cpp::get_class<app::IClipper__Class>(type_info(), "UnityEngine.UI", "IClipper");
        }
        inline app::IClipper__Array* create_array(int size) {
            return il2cpp::array_new<app::IClipper__Array>(get_class(), size);
        }
        inline app::IClipper__Array* create_array(const std::vector<app::IClipper*>& items) {
            return il2cpp::array_new<app::IClipper__Array>(get_class(), items);
        }
    } // namespace IClipper
} // namespace app::classes::types
