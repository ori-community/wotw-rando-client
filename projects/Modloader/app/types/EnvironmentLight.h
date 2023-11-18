#pragma once
#include <Modloader/app/structs/EnvironmentLight.h>
#include <Modloader/app/structs/EnvironmentLight__Array.h>
#include <Modloader/app/structs/EnvironmentLight__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace EnvironmentLight {
        inline app::EnvironmentLight__Class** type_info() {
            static app::EnvironmentLight__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::EnvironmentLight__Class**)(modloader::win::memory::resolve_rva(0x0476B7D0));
            }
            return cache;
        }
        inline app::EnvironmentLight__Class* get_class() {
            return il2cpp::get_class<app::EnvironmentLight__Class>(type_info(), "", "EnvironmentLight");
        }
        inline app::EnvironmentLight* create() {
            return il2cpp::create_object<app::EnvironmentLight>(get_class());
        }
        inline app::EnvironmentLight__Array* create_array(int size) {
            return il2cpp::array_new<app::EnvironmentLight__Array>(get_class(), size);
        }
        inline app::EnvironmentLight__Array* create_array(const std::vector<app::EnvironmentLight*>& items) {
            return il2cpp::array_new<app::EnvironmentLight__Array>(get_class(), items);
        }
    } // namespace EnvironmentLight
} // namespace app::classes::types
