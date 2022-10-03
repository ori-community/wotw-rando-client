#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace AttachToVerletStructure {
        namespace {
            app::AttachToVerletStructure__Class* type_info_ref = nullptr;
        }
        app::AttachToVerletStructure__Class** type_info = &type_info_ref;
        inline app::AttachToVerletStructure__Class* get_class() {
            return il2cpp::get_class<app::AttachToVerletStructure__Class>(type_info, "", "AttachToVerletStructure");
        }
        inline app::AttachToVerletStructure* create() {
            return il2cpp::create_object<app::AttachToVerletStructure>(get_class());
        }
    } // namespace AttachToVerletStructure
} // namespace app::classes::types
