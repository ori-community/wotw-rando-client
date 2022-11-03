#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace YouCanLeaveYourHatOn_Data {
        inline app::YouCanLeaveYourHatOn_Data__Class** type_info = (app::YouCanLeaveYourHatOn_Data__Class**)(modloader::win::memory::resolve_rva(0x04754BB8));
        inline app::YouCanLeaveYourHatOn_Data__Class* get_class() {
            return il2cpp::get_nested_class<app::YouCanLeaveYourHatOn_Data__Class>(type_info, "", "YouCanLeaveYourHatOn", "Data");
        }
        inline app::YouCanLeaveYourHatOn_Data* create() {
            return il2cpp::create_object<app::YouCanLeaveYourHatOn_Data>(get_class());
        }
        inline app::YouCanLeaveYourHatOn_Data__Array* create_array(int size) {
            return il2cpp::array_new<app::YouCanLeaveYourHatOn_Data__Array>(get_class(), size);
        }
        inline app::YouCanLeaveYourHatOn_Data__Array* create_array(const std::vector<app::YouCanLeaveYourHatOn_Data*>& items) {
            return il2cpp::array_new<app::YouCanLeaveYourHatOn_Data__Array>(get_class(), items);
        }
    } // namespace YouCanLeaveYourHatOn_Data
} // namespace app::classes::types
