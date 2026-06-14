#pragma once
#include <Modloader/app/structs/Resolution.h>
#include <Modloader/app/structs/Resolution__Array.h>
#include <Modloader/app/structs/Resolution__Boxed.h>
#include <Modloader/app/structs/Resolution__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace Resolution {
        inline app::Resolution__Class** type_info() {
            static app::Resolution__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::Resolution__Class**)(modloader::win::memory::resolve_rva(0x0475EFE8));
            }
            return cache;
        }
        inline app::Resolution__Class* get_class() {
            return il2cpp::get_class<app::Resolution__Class>(type_info(), "UnityEngine", "Resolution");
        }
        inline app::Resolution* create() {
            return il2cpp::create_object<app::Resolution>(get_class());
        }
        inline app::Resolution__Boxed* box(app::Resolution value) {
            return il2cpp::box_value<app::Resolution__Boxed>(get_class(), value);
        }
        inline app::Resolution__Array* create_array(int size) {
            return il2cpp::array_new<app::Resolution__Array>(get_class(), size);
        }
        inline app::Resolution__Array* create_array(const std::vector<app::Resolution>& items) {
            return il2cpp::array_new<app::Resolution__Array>(get_class(), items);
        }
    } // namespace Resolution
} // namespace app::classes::types
