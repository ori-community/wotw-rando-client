#pragma once
#include <Modloader/app/structs/Configuration_1.h>
#include <Modloader/app/structs/Configuration_1__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace Configuration_1 {
        inline app::Configuration_1__Class** type_info() {
            static app::Configuration_1__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::Configuration_1__Class**)(modloader::win::memory::resolve_rva(0x04739060));
            }
            return cache;
        }
        inline app::Configuration_1__Class* get_class() {
            return il2cpp::get_class<app::Configuration_1__Class>(type_info(), "TriangleNet", "Configuration");
        }
        inline app::Configuration_1* create() {
            return il2cpp::create_object<app::Configuration_1>(get_class());
        }
    } // namespace Configuration_1
} // namespace app::classes::types
