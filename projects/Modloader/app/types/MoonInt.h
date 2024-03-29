#pragma once
#include <Modloader/app/structs/MoonInt.h>
#include <Modloader/app/structs/MoonInt__Array.h>
#include <Modloader/app/structs/MoonInt__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace MoonInt {
        inline app::MoonInt__Class** type_info() {
            static app::MoonInt__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::MoonInt__Class**)(modloader::win::memory::resolve_rva(0x0470A200));
            }
            return cache;
        }
        inline app::MoonInt__Class* get_class() {
            return il2cpp::get_class<app::MoonInt__Class>(type_info(), "Moon", "MoonInt");
        }
        inline app::MoonInt* create() {
            return il2cpp::create_object<app::MoonInt>(get_class());
        }
        inline app::MoonInt__Array* create_array(int size) {
            return il2cpp::array_new<app::MoonInt__Array>(get_class(), size);
        }
        inline app::MoonInt__Array* create_array(const std::vector<app::MoonInt*>& items) {
            return il2cpp::array_new<app::MoonInt__Array>(get_class(), items);
        }
    } // namespace MoonInt
} // namespace app::classes::types
