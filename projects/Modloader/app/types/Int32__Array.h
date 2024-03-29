#pragma once
#include <Modloader/app/structs/Int32__Array.h>
#include <Modloader/app/structs/Int32__Array__Array.h>
#include <Modloader/app/structs/Int32__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace Int32__Array {
        inline app::Int32__Array__Class** type_info() {
            static app::Int32__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::Int32__Array__Class**)(modloader::win::memory::resolve_rva(0x04705238));
            }
            return cache;
        }
        inline app::Int32__Array__Class* get_class() {
            return il2cpp::get_class<app::Int32__Array__Class>(type_info(), "System", "Int32[]");
        }
        inline app::Int32__Array* create() {
            return il2cpp::create_object<app::Int32__Array>(get_class());
        }
        inline app::Int32__Array__Array* create_array(int size) {
            return il2cpp::array_new<app::Int32__Array__Array>(get_class(), size);
        }
        inline app::Int32__Array__Array* create_array(const std::vector<app::Int32__Array*>& items) {
            return il2cpp::array_new<app::Int32__Array__Array>(get_class(), items);
        }
    } // namespace Int32__Array
} // namespace app::classes::types
