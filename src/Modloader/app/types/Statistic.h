#pragma once
#include <Modloader/app/structs/Statistic.h>
#include <Modloader/app/structs/Statistic__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace Statistic {
        inline app::Statistic__Class** type_info() {
            static app::Statistic__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::Statistic__Class**)(modloader::win::memory::resolve_rva(0x04721BB8));
            }
            return cache;
        }
        inline app::Statistic__Class* get_class() {
            return il2cpp::get_class<app::Statistic__Class>(type_info(), "TriangleNet.Tools", "Statistic");
        }
        inline app::Statistic* create() {
            return il2cpp::create_object<app::Statistic>(get_class());
        }
    } // namespace Statistic
} // namespace app::classes::types
