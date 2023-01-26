#pragma once
#include <Modloader/app/structs/ProtectiveLightCone.h>
#include <Modloader/app/structs/ProtectiveLightCone__Array.h>
#include <Modloader/app/structs/ProtectiveLightCone__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ProtectiveLightCone {
        inline app::ProtectiveLightCone__Class** type_info() {
            static app::ProtectiveLightCone__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::ProtectiveLightCone__Class**)(modloader::win::memory::resolve_rva(0x04792788));
            }
            return cache;
        }
        inline app::ProtectiveLightCone__Class* get_class() {
            return il2cpp::get_class<app::ProtectiveLightCone__Class>(type_info(), "", "ProtectiveLightCone");
        }
        inline app::ProtectiveLightCone* create() {
            return il2cpp::create_object<app::ProtectiveLightCone>(get_class());
        }
        inline app::ProtectiveLightCone__Array* create_array(int size) {
            return il2cpp::array_new<app::ProtectiveLightCone__Array>(get_class(), size);
        }
        inline app::ProtectiveLightCone__Array* create_array(const std::vector<app::ProtectiveLightCone*>& items) {
            return il2cpp::array_new<app::ProtectiveLightCone__Array>(get_class(), items);
        }
    } // namespace ProtectiveLightCone
} // namespace app::classes::types
