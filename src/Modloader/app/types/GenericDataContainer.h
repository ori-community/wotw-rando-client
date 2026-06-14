#pragma once
#include <Modloader/app/structs/GenericDataContainer.h>
#include <Modloader/app/structs/GenericDataContainer__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace GenericDataContainer {
        inline app::GenericDataContainer__Class** type_info() {
            static app::GenericDataContainer__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::GenericDataContainer__Class**)(modloader::win::memory::resolve_rva(0x047317D0));
            }
            return cache;
        }
        inline app::GenericDataContainer__Class* get_class() {
            return il2cpp::get_class<app::GenericDataContainer__Class>(type_info(), "", "GenericDataContainer");
        }
        inline app::GenericDataContainer* create() {
            return il2cpp::create_object<app::GenericDataContainer>(get_class());
        }
    } // namespace GenericDataContainer
} // namespace app::classes::types
