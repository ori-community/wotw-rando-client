#pragma once
#include <Modloader/app/structs/InputInfo.h>
#include <Modloader/app/structs/InputInfo__Array.h>
#include <Modloader/app/structs/InputInfo__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace InputInfo {
        inline app::InputInfo__Class** type_info() {
            static app::InputInfo__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::InputInfo__Class**)(modloader::win::memory::resolve_rva(0x04780998));
            }
            return cache;
        }
        inline app::InputInfo__Class* get_class() {
            return il2cpp::get_class<app::InputInfo__Class>(type_info(), "Moon.UI", "InputInfo");
        }
        inline app::InputInfo* create() {
            return il2cpp::create_object<app::InputInfo>(get_class());
        }
        inline app::InputInfo__Array* create_array(int size) {
            return il2cpp::array_new<app::InputInfo__Array>(get_class(), size);
        }
        inline app::InputInfo__Array* create_array(const std::vector<app::InputInfo*>& items) {
            return il2cpp::array_new<app::InputInfo__Array>(get_class(), items);
        }
    } // namespace InputInfo
} // namespace app::classes::types
