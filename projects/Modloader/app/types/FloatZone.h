#pragma once
#include <Modloader/app/structs/FloatZone.h>
#include <Modloader/app/structs/FloatZone__Array.h>
#include <Modloader/app/structs/FloatZone__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace FloatZone {
        inline app::FloatZone__Class** type_info() {
            static app::FloatZone__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::FloatZone__Class**)(modloader::win::memory::resolve_rva(0x0470F590));
            }
            return cache;
        }
        inline app::FloatZone__Class* get_class() {
            return il2cpp::get_class<app::FloatZone__Class>(type_info(), "", "FloatZone");
        }
        inline app::FloatZone* create() {
            return il2cpp::create_object<app::FloatZone>(get_class());
        }
        inline app::FloatZone__Array* create_array(int size) {
            return il2cpp::array_new<app::FloatZone__Array>(get_class(), size);
        }
        inline app::FloatZone__Array* create_array(const std::vector<app::FloatZone*>& items) {
            return il2cpp::array_new<app::FloatZone__Array>(get_class(), items);
        }
    } // namespace FloatZone
} // namespace app::classes::types
