#pragma once
#include <Modloader/app/structs/Reporting.h>
#include <Modloader/app/structs/Reporting__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace Reporting {
        inline app::Reporting__Class** type_info() {
            static app::Reporting__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::Reporting__Class**)(modloader::win::memory::resolve_rva(0x04749770));
            }
            return cache;
        }
        inline app::Reporting__Class* get_class() {
            return il2cpp::get_class<app::Reporting__Class>(type_info(), "Moon.ContinuousIntegration", "Reporting");
        }
        inline app::Reporting* create() {
            return il2cpp::create_object<app::Reporting>(get_class());
        }
    } // namespace Reporting
} // namespace app::classes::types
