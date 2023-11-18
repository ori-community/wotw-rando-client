#pragma once
#include <Modloader/app/structs/DisableAllLoggingLogHandler.h>
#include <Modloader/app/structs/DisableAllLoggingLogHandler__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace DisableAllLoggingLogHandler {
        inline app::DisableAllLoggingLogHandler__Class** type_info() {
            static app::DisableAllLoggingLogHandler__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::DisableAllLoggingLogHandler__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::DisableAllLoggingLogHandler__Class* get_class() {
            return il2cpp::get_class<app::DisableAllLoggingLogHandler__Class>(type_info(), "Moon.ContinuousIntegration", "DisableAllLoggingLogHandler");
        }
        inline app::DisableAllLoggingLogHandler* create() {
            return il2cpp::create_object<app::DisableAllLoggingLogHandler>(get_class());
        }
    } // namespace DisableAllLoggingLogHandler
} // namespace app::classes::types
