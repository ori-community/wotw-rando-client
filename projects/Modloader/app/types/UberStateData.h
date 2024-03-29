#pragma once
#include <Modloader/app/structs/UberStateData.h>
#include <Modloader/app/structs/UberStateData__Array.h>
#include <Modloader/app/structs/UberStateData__Boxed.h>
#include <Modloader/app/structs/UberStateData__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace UberStateData {
        inline app::UberStateData__Class** type_info() {
            static app::UberStateData__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::UberStateData__Class**)(modloader::win::memory::resolve_rva(0x04774738));
            }
            return cache;
        }
        inline app::UberStateData__Class* get_class() {
            return il2cpp::get_class<app::UberStateData__Class>(type_info(), "Moon.UberStateVisualization", "UberStateData");
        }
        inline app::UberStateData* create() {
            return il2cpp::create_object<app::UberStateData>(get_class());
        }
        inline app::UberStateData__Boxed* box(app::UberStateData value) {
            return il2cpp::box_value<app::UberStateData__Boxed>(get_class(), value);
        }
        inline app::UberStateData__Array* create_array(int size) {
            return il2cpp::array_new<app::UberStateData__Array>(get_class(), size);
        }
        inline app::UberStateData__Array* create_array(const std::vector<app::UberStateData>& items) {
            return il2cpp::array_new<app::UberStateData__Array>(get_class(), items);
        }
    } // namespace UberStateData
} // namespace app::classes::types
