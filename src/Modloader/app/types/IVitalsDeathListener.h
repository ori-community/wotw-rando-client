#pragma once
#include <Modloader/app/structs/IVitalsDeathListener.h>
#include <Modloader/app/structs/IVitalsDeathListener__Array.h>
#include <Modloader/app/structs/IVitalsDeathListener__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace IVitalsDeathListener {
        inline app::IVitalsDeathListener__Class** type_info() {
            static app::IVitalsDeathListener__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::IVitalsDeathListener__Class**)(modloader::win::memory::resolve_rva(0x04775A80));
            }
            return cache;
        }
        inline app::IVitalsDeathListener__Class* get_class() {
            return il2cpp::get_class<app::IVitalsDeathListener__Class>(type_info(), "Moon", "IVitalsDeathListener");
        }
        inline app::IVitalsDeathListener__Array* create_array(int size) {
            return il2cpp::array_new<app::IVitalsDeathListener__Array>(get_class(), size);
        }
        inline app::IVitalsDeathListener__Array* create_array(const std::vector<app::IVitalsDeathListener*>& items) {
            return il2cpp::array_new<app::IVitalsDeathListener__Array>(get_class(), items);
        }
    } // namespace IVitalsDeathListener
} // namespace app::classes::types
