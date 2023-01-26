#pragma once
#include <Modloader/app/structs/SequencePlatform__Array.h>
#include <Modloader/app/structs/SequencePlatform__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace SequencePlatform__Array {
        inline app::SequencePlatform__Array__Class** type_info() {
            static app::SequencePlatform__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::SequencePlatform__Array__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::SequencePlatform__Array__Class* get_class() {
            return il2cpp::get_class<app::SequencePlatform__Array__Class>(type_info(), "", "SequencePlatform[]");
        }
        inline app::SequencePlatform__Array* create() {
            return il2cpp::create_object<app::SequencePlatform__Array>(get_class());
        }
    } // namespace SequencePlatform__Array
} // namespace app::classes::types
