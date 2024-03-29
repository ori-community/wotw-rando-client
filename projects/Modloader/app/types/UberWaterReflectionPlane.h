#pragma once
#include <Modloader/app/structs/UberWaterReflectionPlane.h>
#include <Modloader/app/structs/UberWaterReflectionPlane__Array.h>
#include <Modloader/app/structs/UberWaterReflectionPlane__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace UberWaterReflectionPlane {
        inline app::UberWaterReflectionPlane__Class** type_info() {
            static app::UberWaterReflectionPlane__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::UberWaterReflectionPlane__Class**)(modloader::win::memory::resolve_rva(0x04743678));
            }
            return cache;
        }
        inline app::UberWaterReflectionPlane__Class* get_class() {
            return il2cpp::get_class<app::UberWaterReflectionPlane__Class>(type_info(), "", "UberWaterReflectionPlane");
        }
        inline app::UberWaterReflectionPlane* create() {
            return il2cpp::create_object<app::UberWaterReflectionPlane>(get_class());
        }
        inline app::UberWaterReflectionPlane__Array* create_array(int size) {
            return il2cpp::array_new<app::UberWaterReflectionPlane__Array>(get_class(), size);
        }
        inline app::UberWaterReflectionPlane__Array* create_array(const std::vector<app::UberWaterReflectionPlane*>& items) {
            return il2cpp::array_new<app::UberWaterReflectionPlane__Array>(get_class(), items);
        }
    } // namespace UberWaterReflectionPlane
} // namespace app::classes::types
