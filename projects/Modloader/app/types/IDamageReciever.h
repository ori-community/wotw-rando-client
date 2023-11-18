#pragma once
#include <Modloader/app/structs/IDamageReciever.h>
#include <Modloader/app/structs/IDamageReciever__Array.h>
#include <Modloader/app/structs/IDamageReciever__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace IDamageReciever {
        inline app::IDamageReciever__Class** type_info() {
            static app::IDamageReciever__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::IDamageReciever__Class**)(modloader::win::memory::resolve_rva(0x04731E80));
            }
            return cache;
        }
        inline app::IDamageReciever__Class* get_class() {
            return il2cpp::get_class<app::IDamageReciever__Class>(type_info(), "", "IDamageReciever");
        }
        inline app::IDamageReciever__Array* create_array(int size) {
            return il2cpp::array_new<app::IDamageReciever__Array>(get_class(), size);
        }
        inline app::IDamageReciever__Array* create_array(const std::vector<app::IDamageReciever*>& items) {
            return il2cpp::array_new<app::IDamageReciever__Array>(get_class(), items);
        }
    } // namespace IDamageReciever
} // namespace app::classes::types
