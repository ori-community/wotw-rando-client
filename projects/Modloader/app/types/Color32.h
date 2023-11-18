#pragma once
#include <Modloader/app/structs/Color32.h>
#include <Modloader/app/structs/Color32__Array.h>
#include <Modloader/app/structs/Color32__Boxed.h>
#include <Modloader/app/structs/Color32__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace Color32 {
        inline app::Color32__Class** type_info() {
            static app::Color32__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::Color32__Class**)(modloader::win::memory::resolve_rva(0x0474D978));
            }
            return cache;
        }
        inline app::Color32__Class* get_class() {
            return il2cpp::get_class<app::Color32__Class>(type_info(), "UnityEngine", "Color32");
        }
        inline app::Color32* create() {
            return il2cpp::create_object<app::Color32>(get_class());
        }
        inline app::Color32__Boxed* box(app::Color32 value) {
            return il2cpp::box_value<app::Color32__Boxed>(get_class(), value);
        }
        inline app::Color32__Array* create_array(int size) {
            return il2cpp::array_new<app::Color32__Array>(get_class(), size);
        }
        inline app::Color32__Array* create_array(const std::vector<app::Color32>& items) {
            return il2cpp::array_new<app::Color32__Array>(get_class(), items);
        }
    } // namespace Color32
} // namespace app::classes::types
