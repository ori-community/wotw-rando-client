#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/BlackboardVariable__Array__Class.h>
#include <Modloader/app/structs/BlackboardVariable__Array.h>

namespace app::classes::types {
    namespace BlackboardVariable__Array {
        namespace {
            inline app::BlackboardVariable__Array__Class* type_info_ref = nullptr;
        }
        inline app::BlackboardVariable__Array__Class** type_info = &type_info_ref;
        inline app::BlackboardVariable__Array__Class* get_class() {
            return il2cpp::get_class<app::BlackboardVariable__Array__Class>(type_info, "Moon.BehaviourSystem", "BlackboardVariable[]");
        }
        inline app::BlackboardVariable__Array* create() {
            return il2cpp::create_object<app::BlackboardVariable__Array>(get_class());
        }
    } // namespace BlackboardVariable__Array
} // namespace app::classes::types
