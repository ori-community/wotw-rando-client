#pragma once
#include <Modloader/app/structs/Display.h>
#include <Modloader/app/structs/Display__Array.h>
#include <Modloader/app/structs/Display__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace Display {
        inline app::Display__Class** type_info() {
            static app::Display__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::Display__Class**)(modloader::win::memory::resolve_rva(0x0479A200));
            }
            return cache;
        }
        inline app::Display__Class* get_class() {
            return il2cpp::get_class<app::Display__Class>(type_info(), "UnityEngine", "Display");
        }
        inline app::Display* create() {
            return il2cpp::create_object<app::Display>(get_class());
        }
        inline app::Display__Array* create_array(int size) {
            return il2cpp::array_new<app::Display__Array>(get_class(), size);
        }
        inline app::Display__Array* create_array(const std::vector<app::Display*>& items) {
            return il2cpp::array_new<app::Display__Array>(get_class(), items);
        }
    } // namespace Display
} // namespace app::classes::types
