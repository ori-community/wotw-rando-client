#pragma once
#include <Modloader/app/structs/MoonFloat.h>
#include <Modloader/app/structs/MoonFloat__Array.h>
#include <Modloader/app/structs/MoonFloat__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace MoonFloat {
        inline app::MoonFloat__Class** type_info() {
            static app::MoonFloat__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::MoonFloat__Class**)(modloader::win::memory::resolve_rva(0x04747408));
            }
            return cache;
        }
        inline app::MoonFloat__Class* get_class() {
            return il2cpp::get_class<app::MoonFloat__Class>(type_info(), "Moon", "MoonFloat");
        }
        inline app::MoonFloat* create() {
            return il2cpp::create_object<app::MoonFloat>(get_class());
        }
        inline app::MoonFloat__Array* create_array(int size) {
            return il2cpp::array_new<app::MoonFloat__Array>(get_class(), size);
        }
        inline app::MoonFloat__Array* create_array(const std::vector<app::MoonFloat*>& items) {
            return il2cpp::array_new<app::MoonFloat__Array>(get_class(), items);
        }
    } // namespace MoonFloat
} // namespace app::classes::types
