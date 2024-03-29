#pragma once
#include <Modloader/app/structs/DesiredUberStateInt.h>
#include <Modloader/app/structs/DesiredUberStateInt__Array.h>
#include <Modloader/app/structs/DesiredUberStateInt__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace DesiredUberStateInt {
        inline app::DesiredUberStateInt__Class** type_info() {
            static app::DesiredUberStateInt__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::DesiredUberStateInt__Class**)(modloader::win::memory::resolve_rva(0x04749AF0));
            }
            return cache;
        }
        inline app::DesiredUberStateInt__Class* get_class() {
            return il2cpp::get_class<app::DesiredUberStateInt__Class>(type_info(), "", "DesiredUberStateInt");
        }
        inline app::DesiredUberStateInt* create() {
            return il2cpp::create_object<app::DesiredUberStateInt>(get_class());
        }
        inline app::DesiredUberStateInt__Array* create_array(int size) {
            return il2cpp::array_new<app::DesiredUberStateInt__Array>(get_class(), size);
        }
        inline app::DesiredUberStateInt__Array* create_array(const std::vector<app::DesiredUberStateInt*>& items) {
            return il2cpp::array_new<app::DesiredUberStateInt__Array>(get_class(), items);
        }
    } // namespace DesiredUberStateInt
} // namespace app::classes::types
