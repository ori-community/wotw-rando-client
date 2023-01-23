#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/KeySizes__Class.h>
#include <Modloader/app/structs/KeySizes.h>
#include <Modloader/app/structs/KeySizes__Array.h>

namespace app::classes::types {
    namespace KeySizes {
        inline app::KeySizes__Class** type_info = (app::KeySizes__Class**)(modloader::win::memory::resolve_rva(0x047627D0));
        inline app::KeySizes__Class* get_class() {
            return il2cpp::get_class<app::KeySizes__Class>(type_info, "System.Security.Cryptography", "KeySizes");
        }
        inline app::KeySizes* create() {
            return il2cpp::create_object<app::KeySizes>(get_class());
        }
        inline app::KeySizes__Array* create_array(int size) {
            return il2cpp::array_new<app::KeySizes__Array>(get_class(), size);
        }
        inline app::KeySizes__Array* create_array(const std::vector<app::KeySizes*>& items) {
            return il2cpp::array_new<app::KeySizes__Array>(get_class(), items);
        }
    } // namespace KeySizes
} // namespace app::classes::types
