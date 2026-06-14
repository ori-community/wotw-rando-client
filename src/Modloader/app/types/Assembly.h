#pragma once
#include <Modloader/app/structs/Assembly.h>
#include <Modloader/app/structs/Assembly__Array.h>
#include <Modloader/app/structs/Assembly__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace Assembly {
        inline app::Assembly__Class** type_info() {
            static app::Assembly__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::Assembly__Class**)(modloader::win::memory::resolve_rva(0x0474CFE0));
            }
            return cache;
        }
        inline app::Assembly__Class* get_class() {
            return il2cpp::get_class<app::Assembly__Class>(type_info(), "System.Reflection", "Assembly");
        }
        inline app::Assembly* create() {
            return il2cpp::create_object<app::Assembly>(get_class());
        }
        inline app::Assembly__Array* create_array(int size) {
            return il2cpp::array_new<app::Assembly__Array>(get_class(), size);
        }
        inline app::Assembly__Array* create_array(const std::vector<app::Assembly*>& items) {
            return il2cpp::array_new<app::Assembly__Array>(get_class(), items);
        }
    } // namespace Assembly
} // namespace app::classes::types
