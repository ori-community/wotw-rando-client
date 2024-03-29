#pragma once
#include <Modloader/app/structs/LocalVariables_VariableScope.h>
#include <Modloader/app/structs/LocalVariables_VariableScope__Array.h>
#include <Modloader/app/structs/LocalVariables_VariableScope__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace LocalVariables_VariableScope {
        inline app::LocalVariables_VariableScope__Class** type_info() {
            static app::LocalVariables_VariableScope__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::LocalVariables_VariableScope__Class**)(modloader::win::memory::resolve_rva(0x04720208));
            }
            return cache;
        }
        inline app::LocalVariables_VariableScope__Class* get_class() {
            return il2cpp::get_nested_class<app::LocalVariables_VariableScope__Class>(type_info(), "System.Linq.Expressions.Interpreter", "LocalVariables", "VariableScope");
        }
        inline app::LocalVariables_VariableScope* create() {
            return il2cpp::create_object<app::LocalVariables_VariableScope>(get_class());
        }
        inline app::LocalVariables_VariableScope__Array* create_array(int size) {
            return il2cpp::array_new<app::LocalVariables_VariableScope__Array>(get_class(), size);
        }
        inline app::LocalVariables_VariableScope__Array* create_array(const std::vector<app::LocalVariables_VariableScope*>& items) {
            return il2cpp::array_new<app::LocalVariables_VariableScope__Array>(get_class(), items);
        }
    } // namespace LocalVariables_VariableScope
} // namespace app::classes::types
