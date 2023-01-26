#pragma once
#include <Modloader/app/structs/DllNotFoundException.h>
#include <Modloader/app/structs/DllNotFoundException__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace DllNotFoundException {
        inline app::DllNotFoundException__Class** type_info() {
            static app::DllNotFoundException__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::DllNotFoundException__Class**)(modloader::win::memory::resolve_rva(0x04758DC8));
            }
            return cache;
        }
        inline app::DllNotFoundException__Class* get_class() {
            return il2cpp::get_class<app::DllNotFoundException__Class>(type_info(), "System", "DllNotFoundException");
        }
        inline app::DllNotFoundException* create() {
            return il2cpp::create_object<app::DllNotFoundException>(get_class());
        }
    } // namespace DllNotFoundException
} // namespace app::classes::types
