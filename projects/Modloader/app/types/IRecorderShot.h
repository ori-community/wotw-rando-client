#pragma once
#include <Modloader/app/structs/IRecorderShot.h>
#include <Modloader/app/structs/IRecorderShot__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace IRecorderShot {
        inline app::IRecorderShot__Class** type_info() {
            static app::IRecorderShot__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::IRecorderShot__Class**)(modloader::win::memory::resolve_rva(0x04763DB8));
            }
            return cache;
        }
        inline app::IRecorderShot__Class* get_class() {
            return il2cpp::get_class<app::IRecorderShot__Class>(type_info(), "Moon.ContinuousIntegration", "IRecorderShot");
        }
    } // namespace IRecorderShot
} // namespace app::classes::types
