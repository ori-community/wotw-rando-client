#pragma once
#include <Modloader/app/structs/UpgradablePropertyLevel.h>
#include <Modloader/app/structs/UpgradablePropertyLevel__Array.h>
#include <Modloader/app/structs/UpgradablePropertyLevel__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace UpgradablePropertyLevel {
        inline app::UpgradablePropertyLevel__Class** type_info() {
            static app::UpgradablePropertyLevel__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::UpgradablePropertyLevel__Class**)(modloader::win::memory::resolve_rva(0x0476F0C0));
            }
            return cache;
        }
        inline app::UpgradablePropertyLevel__Class* get_class() {
            return il2cpp::get_class<app::UpgradablePropertyLevel__Class>(type_info(), "", "UpgradablePropertyLevel");
        }
        inline app::UpgradablePropertyLevel* create() {
            return il2cpp::create_object<app::UpgradablePropertyLevel>(get_class());
        }
        inline app::UpgradablePropertyLevel__Array* create_array(int size) {
            return il2cpp::array_new<app::UpgradablePropertyLevel__Array>(get_class(), size);
        }
        inline app::UpgradablePropertyLevel__Array* create_array(const std::vector<app::UpgradablePropertyLevel*>& items) {
            return il2cpp::array_new<app::UpgradablePropertyLevel__Array>(get_class(), items);
        }
    } // namespace UpgradablePropertyLevel
} // namespace app::classes::types
