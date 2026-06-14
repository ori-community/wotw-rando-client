#pragma once
#include <Modloader/app/structs/ServerAnimatorHelper_SequenceEntryData__Array.h>
#include <Modloader/app/structs/ServerAnimatorHelper_SequenceEntryData__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ServerAnimatorHelper_SequenceEntryData__Array {
        inline app::ServerAnimatorHelper_SequenceEntryData__Array__Class** type_info() {
            static app::ServerAnimatorHelper_SequenceEntryData__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::ServerAnimatorHelper_SequenceEntryData__Array__Class**)(modloader::win::memory::resolve_rva(0x0478C600));
            }
            return cache;
        }
        inline app::ServerAnimatorHelper_SequenceEntryData__Array__Class* get_class() {
            return il2cpp::get_class<app::ServerAnimatorHelper_SequenceEntryData__Array__Class>(type_info(), "", "ServerAnimatorHelper+SequenceEntryData[]");
        }
        inline app::ServerAnimatorHelper_SequenceEntryData__Array* create() {
            return il2cpp::create_object<app::ServerAnimatorHelper_SequenceEntryData__Array>(get_class());
        }
    } // namespace ServerAnimatorHelper_SequenceEntryData__Array
} // namespace app::classes::types
