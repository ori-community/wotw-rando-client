#pragma once
#include <Modloader/app/structs/IUberStateGroup.h>
#include <Modloader/app/structs/IUberStateGroup__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace IUberStateGroup {
        inline app::IUberStateGroup__Class** type_info() {
            static app::IUberStateGroup__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::IUberStateGroup__Class**)(modloader::win::memory::resolve_rva(0x0471FA68));
            }
            return cache;
        }
        inline app::IUberStateGroup__Class* get_class() {
            return il2cpp::get_class<app::IUberStateGroup__Class>(type_info(), "Moon", "IUberStateGroup");
        }
    } // namespace IUberStateGroup
} // namespace app::classes::types
