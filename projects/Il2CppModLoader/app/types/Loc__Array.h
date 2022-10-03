#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace Loc__Array {
        namespace {
            app::Loc__Array__Class* type_info_ref = nullptr;
        }
        app::Loc__Array__Class** type_info = &type_info_ref;
        inline app::Loc__Array__Class* get_class() {
            return il2cpp::get_class<app::Loc__Array__Class>(type_info, "Microsoft.Applications.Events.DataModels", "Loc[]");
        }
        inline app::Loc__Array* create() {
            return il2cpp::create_object<app::Loc__Array>(get_class());
        }
    } // namespace Loc__Array
} // namespace app::classes::types
