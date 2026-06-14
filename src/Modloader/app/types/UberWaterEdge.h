#pragma once
#include <Modloader/app/structs/UberWaterEdge.h>
#include <Modloader/app/structs/UberWaterEdge__Array.h>
#include <Modloader/app/structs/UberWaterEdge__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace UberWaterEdge {
        inline app::UberWaterEdge__Class** type_info() {
            static app::UberWaterEdge__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::UberWaterEdge__Class**)(modloader::win::memory::resolve_rva(0x047312F0));
            }
            return cache;
        }
        inline app::UberWaterEdge__Class* get_class() {
            return il2cpp::get_class<app::UberWaterEdge__Class>(type_info(), "", "UberWaterEdge");
        }
        inline app::UberWaterEdge* create() {
            return il2cpp::create_object<app::UberWaterEdge>(get_class());
        }
        inline app::UberWaterEdge__Array* create_array(int size) {
            return il2cpp::array_new<app::UberWaterEdge__Array>(get_class(), size);
        }
        inline app::UberWaterEdge__Array* create_array(const std::vector<app::UberWaterEdge*>& items) {
            return il2cpp::array_new<app::UberWaterEdge__Array>(get_class(), items);
        }
    } // namespace UberWaterEdge
} // namespace app::classes::types
