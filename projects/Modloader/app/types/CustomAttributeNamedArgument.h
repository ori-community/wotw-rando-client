#pragma once
#include <Modloader/app/structs/CustomAttributeNamedArgument.h>
#include <Modloader/app/structs/CustomAttributeNamedArgument__Array.h>
#include <Modloader/app/structs/CustomAttributeNamedArgument__Boxed.h>
#include <Modloader/app/structs/CustomAttributeNamedArgument__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace CustomAttributeNamedArgument {
        inline app::CustomAttributeNamedArgument__Class** type_info() {
            static app::CustomAttributeNamedArgument__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::CustomAttributeNamedArgument__Class**)(modloader::win::memory::resolve_rva(0x0478BC40));
            }
            return cache;
        }
        inline app::CustomAttributeNamedArgument__Class* get_class() {
            return il2cpp::get_class<app::CustomAttributeNamedArgument__Class>(type_info(), "System.Reflection", "CustomAttributeNamedArgument");
        }
        inline app::CustomAttributeNamedArgument* create() {
            return il2cpp::create_object<app::CustomAttributeNamedArgument>(get_class());
        }
        inline app::CustomAttributeNamedArgument__Boxed* box(app::CustomAttributeNamedArgument value) {
            return il2cpp::box_value<app::CustomAttributeNamedArgument__Boxed>(get_class(), value);
        }
        inline app::CustomAttributeNamedArgument__Array* create_array(int size) {
            return il2cpp::array_new<app::CustomAttributeNamedArgument__Array>(get_class(), size);
        }
        inline app::CustomAttributeNamedArgument__Array* create_array(const std::vector<app::CustomAttributeNamedArgument>& items) {
            return il2cpp::array_new<app::CustomAttributeNamedArgument__Array>(get_class(), items);
        }
    } // namespace CustomAttributeNamedArgument
} // namespace app::classes::types
