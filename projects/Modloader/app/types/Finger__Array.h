#pragma once
#include <Modloader/app/structs/Finger__Array.h>
#include <Modloader/app/structs/Finger__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace Finger__Array {
        inline app::Finger__Array__Class** type_info() {
            static app::Finger__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::Finger__Array__Class**)(modloader::win::memory::resolve_rva(0x04717A20));
            }
            return cache;
        }
        inline app::Finger__Array__Class* get_class() {
            return il2cpp::get_class<app::Finger__Array__Class>(type_info(), "RootMotion.FinalIK", "Finger[]");
        }
        inline app::Finger__Array* create() {
            return il2cpp::create_object<app::Finger__Array>(get_class());
        }
    } // namespace Finger__Array
} // namespace app::classes::types
