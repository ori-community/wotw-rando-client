#pragma once
#include <Modloader/app/structs/CompiledIdentityConstraint.h>
#include <Modloader/app/structs/CompiledIdentityConstraint__Array.h>
#include <Modloader/app/structs/CompiledIdentityConstraint__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace CompiledIdentityConstraint {
        inline app::CompiledIdentityConstraint__Class** type_info() {
            static app::CompiledIdentityConstraint__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::CompiledIdentityConstraint__Class**)(modloader::win::memory::resolve_rva(0x0470E3E0));
            }
            return cache;
        }
        inline app::CompiledIdentityConstraint__Class* get_class() {
            return il2cpp::get_class<app::CompiledIdentityConstraint__Class>(type_info(), "System.Xml.Schema", "CompiledIdentityConstraint");
        }
        inline app::CompiledIdentityConstraint* create() {
            return il2cpp::create_object<app::CompiledIdentityConstraint>(get_class());
        }
        inline app::CompiledIdentityConstraint__Array* create_array(int size) {
            return il2cpp::array_new<app::CompiledIdentityConstraint__Array>(get_class(), size);
        }
        inline app::CompiledIdentityConstraint__Array* create_array(const std::vector<app::CompiledIdentityConstraint*>& items) {
            return il2cpp::array_new<app::CompiledIdentityConstraint__Array>(get_class(), items);
        }
    } // namespace CompiledIdentityConstraint
} // namespace app::classes::types
