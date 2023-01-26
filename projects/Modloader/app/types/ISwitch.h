#pragma once
#include <Modloader/app/structs/ISwitch.h>
#include <Modloader/app/structs/ISwitch__Array.h>
#include <Modloader/app/structs/ISwitch__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ISwitch {
        inline app::ISwitch__Class** type_info() {
            static app::ISwitch__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::ISwitch__Class**)(modloader::win::memory::resolve_rva(0x04783F40));
            }
            return cache;
        }
        inline app::ISwitch__Class* get_class() {
            return il2cpp::get_class<app::ISwitch__Class>(type_info(), "", "ISwitch");
        }
        inline app::ISwitch__Array* create_array(int size) {
            return il2cpp::array_new<app::ISwitch__Array>(get_class(), size);
        }
        inline app::ISwitch__Array* create_array(const std::vector<app::ISwitch*>& items) {
            return il2cpp::array_new<app::ISwitch__Array>(get_class(), items);
        }
    } // namespace ISwitch
} // namespace app::classes::types
