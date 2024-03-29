#pragma once
#include <Modloader/app/structs/InteractionEffector.h>
#include <Modloader/app/structs/InteractionEffector__Array.h>
#include <Modloader/app/structs/InteractionEffector__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace InteractionEffector {
        inline app::InteractionEffector__Class** type_info() {
            static app::InteractionEffector__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::InteractionEffector__Class**)(modloader::win::memory::resolve_rva(0x04769478));
            }
            return cache;
        }
        inline app::InteractionEffector__Class* get_class() {
            return il2cpp::get_class<app::InteractionEffector__Class>(type_info(), "RootMotion.FinalIK", "InteractionEffector");
        }
        inline app::InteractionEffector* create() {
            return il2cpp::create_object<app::InteractionEffector>(get_class());
        }
        inline app::InteractionEffector__Array* create_array(int size) {
            return il2cpp::array_new<app::InteractionEffector__Array>(get_class(), size);
        }
        inline app::InteractionEffector__Array* create_array(const std::vector<app::InteractionEffector*>& items) {
            return il2cpp::array_new<app::InteractionEffector__Array>(get_class(), items);
        }
    } // namespace InteractionEffector
} // namespace app::classes::types
