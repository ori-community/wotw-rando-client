#pragma once
#include <Modloader/app/structs/IUberStateUIWrapper.h>
#include <Modloader/app/structs/IUberStateUIWrapper__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace IUberStateUIWrapper {
        inline app::IUberStateUIWrapper__Class** type_info() {
            static app::IUberStateUIWrapper__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::IUberStateUIWrapper__Class**)(modloader::win::memory::resolve_rva(0x0475D200));
            }
            return cache;
        }
        inline app::IUberStateUIWrapper__Class* get_class() {
            return il2cpp::get_class<app::IUberStateUIWrapper__Class>(type_info(), "Moon.UberStateVisualization", "IUberStateUIWrapper");
        }
    } // namespace IUberStateUIWrapper
} // namespace app::classes::types
