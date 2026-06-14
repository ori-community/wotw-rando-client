#pragma once
#include <Modloader/app/structs/Operator_Op__Enum.h>
#include <Modloader/app/structs/Operator_Op__Enum__Array.h>
#include <Modloader/app/structs/Operator_Op__Enum__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace Operator_Op__Enum {
        inline app::Operator_Op__Enum__Class** type_info() {
            static app::Operator_Op__Enum__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::Operator_Op__Enum__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::Operator_Op__Enum__Class* get_class() {
            return il2cpp::get_nested_class<app::Operator_Op__Enum__Class>(type_info(), "MS.Internal.Xml.XPath", "Operator", "Op");
        }
        inline app::Operator_Op__Enum* create() {
            return il2cpp::create_object<app::Operator_Op__Enum>(get_class());
        }
        inline app::Operator_Op__Enum__Array* create_array(int size) {
            return il2cpp::array_new<app::Operator_Op__Enum__Array>(get_class(), size);
        }
        inline app::Operator_Op__Enum__Array* create_array(const std::vector<app::Operator_Op__Enum*>& items) {
            return il2cpp::array_new<app::Operator_Op__Enum__Array>(get_class(), items);
        }
    } // namespace Operator_Op__Enum
} // namespace app::classes::types
