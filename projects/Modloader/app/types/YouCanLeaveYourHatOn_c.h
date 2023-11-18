#pragma once
#include <Modloader/app/structs/YouCanLeaveYourHatOn_c.h>
#include <Modloader/app/structs/YouCanLeaveYourHatOn_c__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace YouCanLeaveYourHatOn_c {
        inline app::YouCanLeaveYourHatOn_c__Class** type_info() {
            static app::YouCanLeaveYourHatOn_c__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::YouCanLeaveYourHatOn_c__Class**)(modloader::win::memory::resolve_rva(0x04792530));
            }
            return cache;
        }
        inline app::YouCanLeaveYourHatOn_c__Class* get_class() {
            return il2cpp::get_nested_class<app::YouCanLeaveYourHatOn_c__Class>(type_info(), "", "YouCanLeaveYourHatOn", "<>c");
        }
        inline app::YouCanLeaveYourHatOn_c* create() {
            return il2cpp::create_object<app::YouCanLeaveYourHatOn_c>(get_class());
        }
    } // namespace YouCanLeaveYourHatOn_c
} // namespace app::classes::types
