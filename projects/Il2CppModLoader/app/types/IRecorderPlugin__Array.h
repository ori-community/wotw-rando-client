#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace IRecorderPlugin__Array {
        namespace {
            app::IRecorderPlugin__Array__Class* type_info_ref = nullptr;
        }
        app::IRecorderPlugin__Array__Class** type_info = &type_info_ref;
        inline app::IRecorderPlugin__Array__Class* get_class() {
            return il2cpp::get_class<app::IRecorderPlugin__Array__Class>(type_info, "", "IRecorderPlugin[]");
        }
        inline app::IRecorderPlugin__Array* create() {
            return il2cpp::create_object<app::IRecorderPlugin__Array>(get_class());
        }
    } // namespace IRecorderPlugin__Array
} // namespace app::classes::types
