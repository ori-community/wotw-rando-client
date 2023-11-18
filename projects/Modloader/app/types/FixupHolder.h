#pragma once
#include <Modloader/app/structs/FixupHolder.h>
#include <Modloader/app/structs/FixupHolder__Array.h>
#include <Modloader/app/structs/FixupHolder__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace FixupHolder {
        inline app::FixupHolder__Class** type_info() {
            static app::FixupHolder__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::FixupHolder__Class**)(modloader::win::memory::resolve_rva(0x0475A968));
            }
            return cache;
        }
        inline app::FixupHolder__Class* get_class() {
            return il2cpp::get_class<app::FixupHolder__Class>(type_info(), "System.Runtime.Serialization", "FixupHolder");
        }
        inline app::FixupHolder* create() {
            return il2cpp::create_object<app::FixupHolder>(get_class());
        }
        inline app::FixupHolder__Array* create_array(int size) {
            return il2cpp::array_new<app::FixupHolder__Array>(get_class(), size);
        }
        inline app::FixupHolder__Array* create_array(const std::vector<app::FixupHolder*>& items) {
            return il2cpp::array_new<app::FixupHolder__Array>(get_class(), items);
        }
    } // namespace FixupHolder
} // namespace app::classes::types
