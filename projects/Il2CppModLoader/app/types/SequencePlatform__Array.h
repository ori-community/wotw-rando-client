#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace SequencePlatform__Array {
        namespace {
            app::SequencePlatform__Array__Class* type_info_ref = nullptr;
        }
        app::SequencePlatform__Array__Class** type_info = &type_info_ref;
        inline app::SequencePlatform__Array__Class* get_class() {
            return il2cpp::get_class<app::SequencePlatform__Array__Class>(type_info, "", "SequencePlatform[]");
        }
        inline app::SequencePlatform__Array* create() {
            return il2cpp::create_object<app::SequencePlatform__Array>(get_class());
        }
    } // namespace SequencePlatform__Array
} // namespace app::classes::types
