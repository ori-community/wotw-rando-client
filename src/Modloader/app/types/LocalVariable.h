#pragma once
#include <Modloader/app/structs/LocalVariable.h>
#include <Modloader/app/structs/LocalVariable__Array.h>
#include <Modloader/app/structs/LocalVariable__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace LocalVariable {
        inline app::LocalVariable__Class** type_info() {
            static app::LocalVariable__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::LocalVariable__Class**)(modloader::win::memory::resolve_rva(0x04711D20));
            }
            return cache;
        }
        inline app::LocalVariable__Class* get_class() {
            return il2cpp::get_class<app::LocalVariable__Class>(type_info(), "System.Linq.Expressions.Interpreter", "LocalVariable");
        }
        inline app::LocalVariable* create() {
            return il2cpp::create_object<app::LocalVariable>(get_class());
        }
        inline app::LocalVariable__Array* create_array(int size) {
            return il2cpp::array_new<app::LocalVariable__Array>(get_class(), size);
        }
        inline app::LocalVariable__Array* create_array(const std::vector<app::LocalVariable*>& items) {
            return il2cpp::array_new<app::LocalVariable__Array>(get_class(), items);
        }
    } // namespace LocalVariable
} // namespace app::classes::types
