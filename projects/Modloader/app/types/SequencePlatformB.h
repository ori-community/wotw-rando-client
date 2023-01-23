#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/SequencePlatformB__Class.h>
#include <Modloader/app/structs/SequencePlatformB.h>
#include <Modloader/app/structs/SequencePlatformB__Array.h>

namespace app::classes::types {
    namespace SequencePlatformB {
        namespace {
            inline app::SequencePlatformB__Class* type_info_ref = nullptr;
        }
        inline app::SequencePlatformB__Class** type_info = &type_info_ref;
        inline app::SequencePlatformB__Class* get_class() {
            return il2cpp::get_class<app::SequencePlatformB__Class>(type_info, "", "SequencePlatformB");
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
