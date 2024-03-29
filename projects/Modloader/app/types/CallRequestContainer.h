#pragma once
#include <Modloader/app/structs/CallRequestContainer.h>
#include <Modloader/app/structs/CallRequestContainer__Array.h>
#include <Modloader/app/structs/CallRequestContainer__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace CallRequestContainer {
        inline app::CallRequestContainer__Class** type_info() {
            static app::CallRequestContainer__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::CallRequestContainer__Class**)(modloader::win::memory::resolve_rva(0x04743E68));
            }
            return cache;
        }
        inline app::CallRequestContainer__Class* get_class() {
            return il2cpp::get_class<app::CallRequestContainer__Class>(type_info(), "PlayFab.Internal", "CallRequestContainer");
        }
        inline app::CallRequestContainer* create() {
            return il2cpp::create_object<app::CallRequestContainer>(get_class());
        }
        inline app::CallRequestContainer__Array* create_array(int size) {
            return il2cpp::array_new<app::CallRequestContainer__Array>(get_class(), size);
        }
        inline app::CallRequestContainer__Array* create_array(const std::vector<app::CallRequestContainer*>& items) {
            return il2cpp::array_new<app::CallRequestContainer__Array>(get_class(), items);
        }
    } // namespace CallRequestContainer
} // namespace app::classes::types
