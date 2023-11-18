#pragma once
#include <Modloader/app/structs/Record.h>
#include <Modloader/app/structs/Record__Array.h>
#include <Modloader/app/structs/Record__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace Record {
        inline app::Record__Class** type_info() {
            static app::Record__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::Record__Class**)(modloader::win::memory::resolve_rva(0x0476BD98));
            }
            return cache;
        }
        inline app::Record__Class* get_class() {
            return il2cpp::get_class<app::Record__Class>(type_info(), "PhysicsDebugTools", "Record");
        }
        inline app::Record* create() {
            return il2cpp::create_object<app::Record>(get_class());
        }
        inline app::Record__Array* create_array(int size) {
            return il2cpp::array_new<app::Record__Array>(get_class(), size);
        }
        inline app::Record__Array* create_array(const std::vector<app::Record*>& items) {
            return il2cpp::array_new<app::Record__Array>(get_class(), items);
        }
    } // namespace Record
} // namespace app::classes::types
