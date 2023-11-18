#pragma once
#include <Modloader/app/structs/SequencePlatformB.h>
#include <Modloader/app/structs/SequencePlatformB__Array.h>
#include <Modloader/app/structs/SequencePlatformB__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace SequencePlatformB {
        inline app::SequencePlatformB__Class** type_info() {
            static app::SequencePlatformB__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::SequencePlatformB__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::SequencePlatformB__Class* get_class() {
            return il2cpp::get_class<app::SequencePlatformB__Class>(type_info(), "", "SequencePlatformB");
        }
        inline app::SequencePlatformB* create() {
            return il2cpp::create_object<app::SequencePlatformB>(get_class());
        }
        inline app::SequencePlatformB__Array* create_array(int size) {
            return il2cpp::array_new<app::SequencePlatformB__Array>(get_class(), size);
        }
        inline app::SequencePlatformB__Array* create_array(const std::vector<app::SequencePlatformB*>& items) {
            return il2cpp::array_new<app::SequencePlatformB__Array>(get_class(), items);
        }
    } // namespace SequencePlatformB
} // namespace app::classes::types
