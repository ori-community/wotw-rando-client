#pragma once
#include <Modloader/app/structs/UberStateDataView.h>
#include <Modloader/app/structs/UberStateDataView__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace UberStateDataView {
        inline app::UberStateDataView__Class** type_info() {
            static app::UberStateDataView__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::UberStateDataView__Class**)(modloader::win::memory::resolve_rva(0x04781948));
            }
            return cache;
        }
        inline app::UberStateDataView__Class* get_class() {
            return il2cpp::get_class<app::UberStateDataView__Class>(type_info(), "Moon.UberStateVisualization", "UberStateDataView");
        }
        inline app::UberStateDataView* create() {
            return il2cpp::create_object<app::UberStateDataView>(get_class());
        }
    } // namespace UberStateDataView
} // namespace app::classes::types
