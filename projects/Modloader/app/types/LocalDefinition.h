#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace LocalDefinition {
        inline app::LocalDefinition__Class** type_info = (app::LocalDefinition__Class**)(modloader::win::memory::resolve_rva(0x0471BA50));
        inline app::LocalDefinition__Class* get_class() {
            return il2cpp::get_class<app::LocalDefinition__Class>(type_info, "System.Linq.Expressions.Interpreter", "LocalDefinition");
        }
        inline app::LocalDefinition* create() {
            return il2cpp::create_object<app::LocalDefinition>(get_class());
        }
        inline app::LocalDefinition__Boxed* box(app::LocalDefinition value) {
            return il2cpp::box_value<app::LocalDefinition__Boxed>(get_class(), value);
        }
        inline app::LocalDefinition__Array* create_array(int size) {
            return il2cpp::array_new<app::LocalDefinition__Array>(get_class(), size);
        }
        inline app::LocalDefinition__Array* create_array(const std::vector<app::LocalDefinition>& items) {
            return il2cpp::array_new<app::LocalDefinition__Array>(get_class(), items);
        }
    } // namespace LocalDefinition
} // namespace app::classes::types
