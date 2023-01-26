#pragma once
#include <Modloader/app/structs/Int16.h>
#include <Modloader/app/structs/Int16__Array.h>
#include <Modloader/app/structs/Int16__Boxed.h>
#include <Modloader/app/structs/Int16__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace Int16 {
        inline app::Int16__Class** type_info() {
            static app::Int16__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::Int16__Class**)(modloader::win::memory::resolve_rva(0x0470E240));
            }
            return cache;
        }
        inline app::Int16__Class* get_class() {
            return il2cpp::get_class<app::Int16__Class>(type_info(), "System", "Int16");
        }
        inline app::Int16* create() {
            return il2cpp::create_object<app::Int16>(get_class());
        }
        inline app::Int16__Boxed* box(int16_t value) {
            return il2cpp::box_value<app::Int16__Boxed>(get_class(), value);
        }
        inline app::Int16__Array* create_array(int size) {
            return il2cpp::array_new<app::Int16__Array>(get_class(), size);
        }
        inline app::Int16__Array* create_array(const std::vector<int16_t>& items) {
            return il2cpp::array_new<app::Int16__Array>(get_class(), items);
        }
    } // namespace Int16
} // namespace app::classes::types
