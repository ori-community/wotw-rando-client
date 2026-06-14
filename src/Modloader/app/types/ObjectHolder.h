#pragma once
#include <Modloader/app/structs/ObjectHolder.h>
#include <Modloader/app/structs/ObjectHolder__Array.h>
#include <Modloader/app/structs/ObjectHolder__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ObjectHolder {
        inline app::ObjectHolder__Class** type_info() {
            static app::ObjectHolder__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::ObjectHolder__Class**)(modloader::win::memory::resolve_rva(0x0478E500));
            }
            return cache;
        }
        inline app::ObjectHolder__Class* get_class() {
            return il2cpp::get_class<app::ObjectHolder__Class>(type_info(), "System.Runtime.Serialization", "ObjectHolder");
        }
        inline app::ObjectHolder* create() {
            return il2cpp::create_object<app::ObjectHolder>(get_class());
        }
        inline app::ObjectHolder__Array* create_array(int size) {
            return il2cpp::array_new<app::ObjectHolder__Array>(get_class(), size);
        }
        inline app::ObjectHolder__Array* create_array(const std::vector<app::ObjectHolder*>& items) {
            return il2cpp::array_new<app::ObjectHolder__Array>(get_class(), items);
        }
    } // namespace ObjectHolder
} // namespace app::classes::types
