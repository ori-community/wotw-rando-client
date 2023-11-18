#pragma once
#include <Modloader/app/structs/Single.h>
#include <Modloader/app/structs/Single__Array.h>
#include <Modloader/app/structs/Single__Boxed.h>
#include <Modloader/app/structs/Single__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace Single {
        inline app::Single__Class** type_info() {
            static app::Single__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::Single__Class**)(modloader::win::memory::resolve_rva(0x0475E4D8));
            }
            return cache;
        }
        inline app::Single__Class* get_class() {
            return il2cpp::get_class<app::Single__Class>(type_info(), "System", "Single");
        }
        inline app::Single* create() {
            return il2cpp::create_object<app::Single>(get_class());
        }
        inline app::Single__Boxed* box(float value) {
            return il2cpp::box_value<app::Single__Boxed>(get_class(), value);
        }
        inline app::Single__Array* create_array(int size) {
            return il2cpp::array_new<app::Single__Array>(get_class(), size);
        }
        inline app::Single__Array* create_array(const std::vector<float>& items) {
            return il2cpp::array_new<app::Single__Array>(get_class(), items);
        }
    } // namespace Single
} // namespace app::classes::types
