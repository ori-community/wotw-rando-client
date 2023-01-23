#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/WaterPoisonCloud_Blob__Class.h>
#include <Modloader/app/structs/WaterPoisonCloud_Blob.h>
#include <Modloader/app/structs/WaterPoisonCloud_Blob__Boxed.h>
#include <Modloader/app/structs/WaterPoisonCloud_Blob__Array.h>

namespace app::classes::types {
    namespace WaterPoisonCloud_Blob {
        inline app::WaterPoisonCloud_Blob__Class** type_info = (app::WaterPoisonCloud_Blob__Class**)(modloader::win::memory::resolve_rva(0x047157B0));
        inline app::WaterPoisonCloud_Blob__Class* get_class() {
            return il2cpp::get_nested_class<app::WaterPoisonCloud_Blob__Class>(type_info, "", "WaterPoisonCloud", "Blob");
        }
        inline app::WaterPoisonCloud_Blob* create() {
            return il2cpp::create_object<app::WaterPoisonCloud_Blob>(get_class());
        }
        inline app::WaterPoisonCloud_Blob__Boxed* box(app::WaterPoisonCloud_Blob value) {
            return il2cpp::box_value<app::WaterPoisonCloud_Blob__Boxed>(get_class(), value);
        }
        inline app::WaterPoisonCloud_Blob__Array* create_array(int size) {
            return il2cpp::array_new<app::WaterPoisonCloud_Blob__Array>(get_class(), size);
        }
        inline app::WaterPoisonCloud_Blob__Array* create_array(const std::vector<app::WaterPoisonCloud_Blob>& items) {
            return il2cpp::array_new<app::WaterPoisonCloud_Blob__Array>(get_class(), items);
        }
    } // namespace WaterPoisonCloud_Blob
} // namespace app::classes::types
