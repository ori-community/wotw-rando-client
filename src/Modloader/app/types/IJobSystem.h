#pragma once
#include <Modloader/app/structs/IJobSystem.h>
#include <Modloader/app/structs/IJobSystem__Array.h>
#include <Modloader/app/structs/IJobSystem__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace IJobSystem {
        inline app::IJobSystem__Class** type_info() {
            static app::IJobSystem__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::IJobSystem__Class**)(modloader::win::memory::resolve_rva(0x047221E0));
            }
            return cache;
        }
        inline app::IJobSystem__Class* get_class() {
            return il2cpp::get_class<app::IJobSystem__Class>(type_info(), "Moon.Jobs", "IJobSystem");
        }
        inline app::IJobSystem__Array* create_array(int size) {
            return il2cpp::array_new<app::IJobSystem__Array>(get_class(), size);
        }
        inline app::IJobSystem__Array* create_array(const std::vector<app::IJobSystem*>& items) {
            return il2cpp::array_new<app::IJobSystem__Array>(get_class(), items);
        }
    } // namespace IJobSystem
} // namespace app::classes::types
