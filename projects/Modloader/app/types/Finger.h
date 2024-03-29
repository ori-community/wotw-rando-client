#pragma once
#include <Modloader/app/structs/Finger.h>
#include <Modloader/app/structs/Finger__Array.h>
#include <Modloader/app/structs/Finger__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace Finger {
        inline app::Finger__Class** type_info() {
            static app::Finger__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::Finger__Class**)(modloader::win::memory::resolve_rva(0x04769F90));
            }
            return cache;
        }
        inline app::Finger__Class* get_class() {
            return il2cpp::get_class<app::Finger__Class>(type_info(), "RootMotion.FinalIK", "Finger");
        }
        inline app::Finger* create() {
            return il2cpp::create_object<app::Finger>(get_class());
        }
        inline app::Finger__Array* create_array(int size) {
            return il2cpp::array_new<app::Finger__Array>(get_class(), size);
        }
        inline app::Finger__Array* create_array(const std::vector<app::Finger*>& items) {
            return il2cpp::array_new<app::Finger__Array>(get_class(), items);
        }
    } // namespace Finger
} // namespace app::classes::types
