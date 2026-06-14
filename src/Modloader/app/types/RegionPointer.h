#pragma once
#include <Modloader/app/structs/RegionPointer.h>
#include <Modloader/app/structs/RegionPointer__Array.h>
#include <Modloader/app/structs/RegionPointer__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace RegionPointer {
        inline app::RegionPointer__Class** type_info() {
            static app::RegionPointer__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::RegionPointer__Class**)(modloader::win::memory::resolve_rva(0x0471DBE8));
            }
            return cache;
        }
        inline app::RegionPointer__Class* get_class() {
            return il2cpp::get_class<app::RegionPointer__Class>(type_info(), "TriangleNet.Geometry", "RegionPointer");
        }
        inline app::RegionPointer* create() {
            return il2cpp::create_object<app::RegionPointer>(get_class());
        }
        inline app::RegionPointer__Array* create_array(int size) {
            return il2cpp::array_new<app::RegionPointer__Array>(get_class(), size);
        }
        inline app::RegionPointer__Array* create_array(const std::vector<app::RegionPointer*>& items) {
            return il2cpp::array_new<app::RegionPointer__Array>(get_class(), items);
        }
    } // namespace RegionPointer
} // namespace app::classes::types
