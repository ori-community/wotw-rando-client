#pragma once
#include <Modloader/app/structs/HitStop.h>
#include <Modloader/app/structs/HitStop__Array.h>
#include <Modloader/app/structs/HitStop__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace HitStop {
        inline app::HitStop__Class** type_info() {
            static app::HitStop__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::HitStop__Class**)(modloader::win::memory::resolve_rva(0x04719EC8));
            }
            return cache;
        }
        inline app::HitStop__Class* get_class() {
            return il2cpp::get_class<app::HitStop__Class>(type_info(), "Moon", "HitStop");
        }
        inline app::HitStop* create() {
            return il2cpp::create_object<app::HitStop>(get_class());
        }
        inline app::HitStop__Array* create_array(int size) {
            return il2cpp::array_new<app::HitStop__Array>(get_class(), size);
        }
        inline app::HitStop__Array* create_array(const std::vector<app::HitStop*>& items) {
            return il2cpp::array_new<app::HitStop__Array>(get_class(), items);
        }
    } // namespace HitStop
} // namespace app::classes::types
