#pragma once
#include <Modloader/app/structs/DataPoint.h>
#include <Modloader/app/structs/DataPoint__Array.h>
#include <Modloader/app/structs/DataPoint__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace DataPoint {
        inline app::DataPoint__Class** type_info() {
            static app::DataPoint__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::DataPoint__Class**)(modloader::win::memory::resolve_rva(0x0473FBC8));
            }
            return cache;
        }
        inline app::DataPoint__Class* get_class() {
            return il2cpp::get_class<app::DataPoint__Class>(type_info(), "Moon.Telemetry", "DataPoint");
        }
        inline app::DataPoint* create() {
            return il2cpp::create_object<app::DataPoint>(get_class());
        }
        inline app::DataPoint__Array* create_array(int size) {
            return il2cpp::array_new<app::DataPoint__Array>(get_class(), size);
        }
        inline app::DataPoint__Array* create_array(const std::vector<app::DataPoint*>& items) {
            return il2cpp::array_new<app::DataPoint__Array>(get_class(), items);
        }
    } // namespace DataPoint
} // namespace app::classes::types
