#pragma once
#include <Modloader/app/structs/UberID.h>
#include <Modloader/app/structs/UberID__Array.h>
#include <Modloader/app/structs/UberID__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace UberID {
        inline app::UberID__Class** type_info() {
            static app::UberID__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::UberID__Class**)(modloader::win::memory::resolve_rva(0x04766D98));
            }
            return cache;
        }
        inline app::UberID__Class* get_class() {
            return il2cpp::get_class<app::UberID__Class>(type_info(), "Moon", "UberID");
        }
        inline app::UberID* create() {
            return il2cpp::create_object<app::UberID>(get_class());
        }
        inline app::UberID__Array* create_array(int size) {
            return il2cpp::array_new<app::UberID__Array>(get_class(), size);
        }
        inline app::UberID__Array* create_array(const std::vector<app::UberID*>& items) {
            return il2cpp::array_new<app::UberID__Array>(get_class(), items);
        }
    } // namespace UberID
} // namespace app::classes::types
