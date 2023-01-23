#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/SequencePlatformB__Array__Class.h>
#include <Modloader/app/structs/SequencePlatformB__Array.h>

namespace app::classes::types {
    namespace SequencePlatformB__Array {
        namespace {
            inline app::SequencePlatformB__Array__Class* type_info_ref = nullptr;
        }
        inline app::SequencePlatformB__Array__Class** type_info = &type_info_ref;
        inline app::SequencePlatformB__Array__Class* get_class() {
            return il2cpp::get_class<app::SequencePlatformB__Array__Class>(type_info, "", "SequencePlatformB[]");
        }
        inline app::SequencePlatformB__Array* create() {
            return il2cpp::create_object<app::SequencePlatformB__Array>(get_class());
        }
    } // namespace SequencePlatformB__Array
} // namespace app::classes::types
