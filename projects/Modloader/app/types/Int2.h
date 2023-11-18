#pragma once
#include <Modloader/app/structs/Int2.h>
#include <Modloader/app/structs/Int2__Array.h>
#include <Modloader/app/structs/Int2__Boxed.h>
#include <Modloader/app/structs/Int2__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace Int2 {
        inline app::Int2__Class** type_info() {
            static app::Int2__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::Int2__Class**)(modloader::win::memory::resolve_rva(0x04722550));
            }
            return cache;
        }
        inline app::Int2__Class* get_class() {
            return il2cpp::get_class<app::Int2__Class>(type_info(), "Swing", "Int2");
        }
        inline app::Int2* create() {
            return il2cpp::create_object<app::Int2>(get_class());
        }
        inline app::Int2__Boxed* box(app::Int2 value) {
            return il2cpp::box_value<app::Int2__Boxed>(get_class(), value);
        }
        inline app::Int2__Array* create_array(int size) {
            return il2cpp::array_new<app::Int2__Array>(get_class(), size);
        }
        inline app::Int2__Array* create_array(const std::vector<app::Int2>& items) {
            return il2cpp::array_new<app::Int2__Array>(get_class(), items);
        }
    } // namespace Int2
} // namespace app::classes::types
