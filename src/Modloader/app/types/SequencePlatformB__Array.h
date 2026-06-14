#pragma once
#include <Modloader/app/structs/SequencePlatformB__Array.h>
#include <Modloader/app/structs/SequencePlatformB__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace SequencePlatformB__Array {
        inline app::SequencePlatformB__Array__Class** type_info() {
            static app::SequencePlatformB__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::SequencePlatformB__Array__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::SequencePlatformB__Array__Class* get_class() {
            return il2cpp::get_class<app::SequencePlatformB__Array__Class>(type_info(), "", "SequencePlatformB[]");
        }
        inline app::SequencePlatformB__Array* create() {
            return il2cpp::create_object<app::SequencePlatformB__Array>(get_class());
        }
    } // namespace SequencePlatformB__Array
} // namespace app::classes::types
