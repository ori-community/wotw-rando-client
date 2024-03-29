#pragma once
#include <Modloader/app/structs/ProtectiveLightRadial.h>
#include <Modloader/app/structs/ProtectiveLightRadial__Array.h>
#include <Modloader/app/structs/ProtectiveLightRadial__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ProtectiveLightRadial {
        inline app::ProtectiveLightRadial__Class** type_info() {
            static app::ProtectiveLightRadial__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::ProtectiveLightRadial__Class**)(modloader::win::memory::resolve_rva(0x047466B0));
            }
            return cache;
        }
        inline app::ProtectiveLightRadial__Class* get_class() {
            return il2cpp::get_class<app::ProtectiveLightRadial__Class>(type_info(), "", "ProtectiveLightRadial");
        }
        inline app::ProtectiveLightRadial* create() {
            return il2cpp::create_object<app::ProtectiveLightRadial>(get_class());
        }
        inline app::ProtectiveLightRadial__Array* create_array(int size) {
            return il2cpp::array_new<app::ProtectiveLightRadial__Array>(get_class(), size);
        }
        inline app::ProtectiveLightRadial__Array* create_array(const std::vector<app::ProtectiveLightRadial*>& items) {
            return il2cpp::array_new<app::ProtectiveLightRadial__Array>(get_class(), items);
        }
    } // namespace ProtectiveLightRadial
} // namespace app::classes::types
