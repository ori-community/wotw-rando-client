#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace SequencePlatformB {
        namespace {
            app::SequencePlatformB__Class* type_info_ref = nullptr;
        }
        app::SequencePlatformB__Class** type_info = &type_info_ref;
        inline app::SequencePlatformB__Class* get_class() {
            return il2cpp::get_class<app::SequencePlatformB__Class>(type_info, "", "SequencePlatformB");
        }
        inline app::SequencePlatformB* create() {
            return il2cpp::create_object<app::SequencePlatformB>(get_class());
        }
        inline app::SequencePlatformB__Array* create_array(int size) {
            return il2cpp::array_new<app::SequencePlatformB__Array>(get_class(), size);
        }
    } // namespace SequencePlatformB
} // namespace app::classes::types
